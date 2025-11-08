from scipy.optimize import minimize
import cirq
import numpy as np
import re
import time
import importlib.util


def measure_gate_count(circuit):
    """Count non-measurement gates."""
    flat = [
        op.gate
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
           and not isinstance(op.gate, cirq.MeasurementGate)
    ]
    return len(flat)


def load_hamiltonian_and_energy(file_path: str):
    hamiltonian_terms = []
    expected_ground_state_energy = None

    with open(file_path, "r", encoding="utf-8") as file:
        lines = file.readlines()

    for line in lines:
        line = line.strip()
        if not line:
            continue
        if "Ground state energy:" in line:
            try:
                expected_ground_state_energy = float(line.split(":")[-1].strip())
            except ValueError:
                pass
        else:
            match = re.match(r'^[+\-\s]*([+\-]?\d+(?:\.\d+)?(?:[eE][+\-]?\d+)?)\s*\*\s*([IXYZ]+)$', line)
            if match:
                coeff = float(match.group(1))
                pauli_str = match.group(2).upper()
                hamiltonian_terms.append((coeff, pauli_str))

    if not hamiltonian_terms:
        return cirq.PauliSum.from_pauli_strings([0.0 * cirq.PauliString({})]), expected_ground_state_energy

    n_qubits = max(len(s) for _, s in hamiltonian_terms)
    qubits = cirq.LineQubit.range(n_qubits)

    pauli_sum = cirq.PauliSum()

    for coeff, pauli_str in hamiltonian_terms:
        ops = []
        for i, ch in enumerate(pauli_str):
            if ch == "I":
                continue
            elif ch == "X":
                ops.append(cirq.X(qubits[i]))
            elif ch == "Y":
                ops.append(cirq.Y(qubits[i]))
            elif ch == "Z":
                ops.append(cirq.Z(qubits[i]))
            else:
                raise ValueError(f"Invalid Pauli character: {ch}")
        pauli_term = cirq.PauliString(ops) if ops else cirq.PauliString({})
        pauli_sum += coeff * pauli_term

    return pauli_sum, expected_ground_state_energy


def ground_truth_run_and_analyze(circuits, hamiltonian, expected_energy, optiter=200):
    if isinstance(hamiltonian, cirq.PauliSum):
        coefs = np.array([float(t.coefficient.real) for t in hamiltonian], dtype=float)
        observables = [t.with_coefficient(1.0) for t in hamiltonian]
    elif isinstance(hamiltonian, (list, tuple)) and all(
            isinstance(x, (list, tuple)) and len(x) == 2 for x in hamiltonian
    ):
        coefs = np.array([float(c) for c, _ in hamiltonian], dtype=float)
        observables = [ps for _, ps in hamiltonian]

        if not all(isinstance(ps, cirq.PauliString) for ps in observables):
            raise TypeError("Hamiltonian list must be [(coef, cirq.PauliString), ...].")
    else:
        raise TypeError("hamiltonian must be cirq.PauliSum or a list of (coef, cirq.PauliString).")

    sim = cirq.Simulator()
    params = sorted(list(cirq.parameter_symbols(circuits)), key=str)

    def energy(x: np.ndarray) -> float:
        resolver = {s: float(v) for s, v in zip(params, x)}
        if len(observables) == 0:
            return 0.0
        try:
            evs = sim.simulate_expectation_values(
                circuits,
                observables=observables,
                param_resolver=cirq.ParamResolver(resolver),
            )
        except TypeError:
            resolved = cirq.resolve_parameters(circuits, resolver, recursive=True)
            evs = sim.simulate_expectation_values(
                resolved,
                observables=observables,
            )
        vals = np.array([ev.real for ev in evs], dtype=float)
        return float(np.dot(coefs, vals))

    if len(params) == 0:
        E = energy(np.array([]))
        err = abs(E - expected_energy)
        return float(err)

    x0 = np.zeros(len(params), dtype=float)
    res = minimize(energy, x0=x0, method="COBYLA", options={"maxiter": int(optiter)})
    E_star = float(res.fun)
    err = abs(E_star - expected_energy)

    return float(err)


def load_algorithm_module(n):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"./algorithm_circuit/efficient_su2_n{n}_l4_fullCNOT.py"
    spec = importlib.util.spec_from_file_location(f"su2_n{n}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def check_model(algo_str, post_proc_str, n, t=1, optiter=200, tol=1e-3):
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    print("VQE task doesn't need shots. So here nan (N/A) is correct.")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    file_path = f'./hamiltonians/n{n}/Heisenberg.txt'
    hamiltonian, expected_energy = load_hamiltonian_and_energy(file_path)

    # 1. Check algorithm (circuit generation) syntax
    try:
        algo_env = {}
        exec(algo_str, globals(), algo_env)
        algorithm_fn = algo_env["algorithm"]
        simulator = cirq.Simulator()
        simulator.run(algorithm_fn)
        # If we reach here, the circuit syntax is valid
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2. Check post-processing code syntax
    try:
        post_env = {}
        exec(post_proc_str, globals(), post_env)
        postprocess_fn = post_env["run_and_analyze"]
        circuit_gt = load_algorithm_module(n).algorithm()
        result = postprocess_fn(circuit_gt.copy(), hamiltonian, expected_energy)
        code_syntax = 1
    except Exception as e:
        print("[✗] Post-processing syntax error:", e)

    if not (circuit_syntax or code_syntax):
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # 3. Run evaluation (if syntax is valid)
    total_correct = 0.
    gate_counts = []
    model_times = []
    truth_times = []

    for trial in range(t):
        try:
            # Model circuit
            circuit_model = algorithm_fn()
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = postprocess_fn(circuit_model, hamiltonian, expected_energy)
            model_times.append(time.time() - start)
            total_correct = 1 - predictions

            # Ground truth circuit (just for timing)
            circuit_gt = load_algorithm_module(n).algorithm()
            start = time.time()
            prediction_gt = ground_truth_run_and_analyze(circuit_gt.copy(), hamiltonian, expected_energy)
            truth_times.append(time.time() - start)

        except Exception as e:
            print(f"[✗] Runtime error during trial (hamiltonian={hamiltonian}):", e)
            return (
                circuit_syntax,
                code_syntax,
                result_score,
                gate_count_ratio,
                shot_ratio,
                time_ratio,
            )

    # 5. Compute metrics
    result_score = total_correct
    avg_gate_count_model = sum(gate_counts)
    avg_gate_count_truth = measure_gate_count(
        load_algorithm_module(n).algorithm()
    )
    gate_count_ratio = avg_gate_count_model / avg_gate_count_truth

    avg_time_model = sum(model_times)
    avg_time_truth = sum(truth_times)
    time_ratio = avg_time_model / avg_time_truth

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


def check_description(prompt):
    s = "Given a Hamiltonian $H$ acting on $n$ qubits"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
