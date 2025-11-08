import importlib.util
import random
import time
import cirq
import re
import numpy as np
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    phi_state: np.ndarray  # Shape (2**n,)
    psi_state: np.ndarray  # Shape (2**n,)

    def _num_qubits_(self):
        return 2 * int(np.log2(len(self.phi_state)))

    def _decompose_(self, qubits):
        n = int(np.log2(len(self.phi_state)))
        phi_qubits = qubits[:n]
        psi_qubits = qubits[n: 2 * n]

        # Normalize states (just in case)
        phi_norm = self.phi_state / np.linalg.norm(self.phi_state)
        psi_norm = self.psi_state / np.linalg.norm(self.psi_state)

        # Create preparation gates
        phi_gate = cirq.StatePreparationChannel(phi_norm)
        psi_gate = cirq.StatePreparationChannel(psi_norm)

        yield phi_gate.on(*phi_qubits)
        yield psi_gate.on(*psi_qubits)

    def _circuit_diagram_info_(self, args):
        n = int(np.log2(len(self.phi_state)))
        return [f"Φ{i}" for i in range(n)] + [f"Ψ{i}" for i in range(n)]


def ground_truth_run_and_analyze(circuit):
    """Run the swap test circuit and estimate the overlap between two states."""
    repetition_num = 100
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=repetition_num)

    measurements = result.measurements["result"]
    num_zero = np.sum(measurements == 0)

    prob_zero = num_zero / repetition_num
    overlap = 2 * prob_zero - 1
    overlap = max(overlap, 0)

    return float(overlap)


def load_algorithm_module(n):
    file_path = f"./algorithm_circuit/swap_test_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"swap_test_n{n}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def measure_gate_count(circuit):
    flat = [
        op.gate
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
           and not isinstance(op.gate, cirq.MeasurementGate)
    ]
    return len(flat)


def generate_oracle_gate(n):
    dim = 2 ** n
    phi_state = np.random.randn(dim) + 1j * np.random.randn(dim)
    psi_state = np.random.randn(dim) + 1j * np.random.randn(dim)
    phi_state /= np.linalg.norm(phi_state)
    psi_state /= np.linalg.norm(psi_state)
    return (
        Oracle(phi_state=phi_state, psi_state=psi_state),
        np.abs(np.vdot(phi_state, psi_state)) ** 2,
    )


def expr_backtrack(expr, code_string, eval_globals, local_vars, default=float("nan")):
    """Try to evaluate an expression by tracing variable assignments backwards."""
    try:
        value = eval(expr, eval_globals, local_vars)
        return int(value) if isinstance(value, int) else default
    except Exception as e:
        print(f"[Eval Error] expr='{expr}' → {e}")

    varname = expr.strip().split(".")[0]
    code_lines = code_string.splitlines()
    target_line_index = -1

    for i, line in enumerate(code_lines):
        if "repetitions" in line and expr in line:
            target_line_index = i
            break

    if target_line_index == -1:
        print(f"[Backtrack] Can't locate line for 'repetitions={expr}'")
        return default

    pattern = re.compile(rf"^\s*{re.escape(varname)}\s*=\s*(.+)")
    for i in range(target_line_index - 1, -1, -1):
        match = pattern.match(code_lines[i])
        if match:
            rhs_expr = match.group(1).strip()
            try:
                val = eval(rhs_expr, eval_globals)
                eval_globals[varname] = val
                value = eval(expr, eval_globals, local_vars)
                return int(value) if isinstance(value, int) else default
            except Exception as e2:
                print(f"[Backtrack Eval Fail] {varname} = {rhs_expr} → {e2}")
                continue

    print(f"[Backtrack Failed] No working definition found for '{varname}' before use.")
    return default


def check_model(algo_str, post_proc_str, n, num_trials=5, shots_per_trial=5, tol=1e-1):
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # 1. Check algorithm code
    try:
        algo_env = {}
        exec(algo_str, globals(), algo_env)
        algorithm_fn = algo_env["algorithm"]
        oracle_gate, _ = generate_oracle_gate(n)
        circuit_algo = algorithm_fn(oracle_gate)
        cirq.Simulator().run(circuit_algo)
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2. Check post-processing code
    try:
        post_env = {}
        exec(post_proc_str, globals(), post_env)
        postprocess_fn = post_env["run_and_analyze"]
        oracle_gate, _ = generate_oracle_gate(n)
        circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
        try:
            postprocess_fn(circuit_gt.copy())
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:
                    algo_env = {}
                    exec(algo_str, globals(), algo_env)
                    algorithm_fn = algo_env["algorithm"]
                    oracle_gate = generate_oracle_gate(n)
                    circuit_algo = algorithm_fn(oracle_gate)
                    postprocess_fn(circuit_algo.copy())
                    code_syntax = 1
                except Exception as e:
                    raise
            raise
        print("[✓] Post-processing code loaded successfully.")
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

    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times = []
    truth_times = []

    for t in range(num_trials):
        oracle_gate, true_overlap = generate_oracle_gate(n)

        try:
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = [
                postprocess_fn(circuit_model.copy()) for _ in range(shots_per_trial)
            ]
            model_times.append(time.time() - start)

            total_correct += sum(abs(pred - true_overlap) < tol for pred in predictions)

            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start = time.time()
            prediction_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy()) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)
            if not all(abs(pred - true_overlap) < tol for pred in prediction_gt):
                print(
                    f"[✗] Ground truth predictions did not match expected overlap at trial{t}: {prediction_gt} != {true_overlap}."
                )
                break

        except Exception as e:
            print(f"[✗] Runtime error during trial {t}:", e)
            return (
                circuit_syntax,
                code_syntax,
                result_score,
                gate_count_ratio,
                shot_ratio,
                time_ratio,
            )

    # 4. Compute shot ratio
    shot_expr = None
    match = re.search(
        r"repetitions\s*=\s*((?:[^\s,)\n#]+(?:\s*[-+*/]\s*[^\s,)\n#]+)*))",
        post_proc_str,
    )
    if match:
        shot_expr = match.group(1)
    if shot_expr:
        eval_globals = globals().copy()
        eval_globals["n"] = n
        local_vars = {}
        shot_model = expr_backtrack(
            shot_expr, post_proc_str, eval_globals, local_vars, default=1
        )
    else:
        shot_model = 1

    # 5. Compute metrics
    shot_truth = 1000
    shot_ratio = shot_model / shot_truth

    # Result metrics
    result_score = total_correct / total_shots
    avg_gate_model = sum(gate_counts) / num_trials
    oracle_gate_truth, _ = generate_oracle_gate(n)
    avg_gate_truth = measure_gate_count(
        load_algorithm_module(n).algorithm(oracle_gate_truth)
    )
    gate_count_ratio = avg_gate_model / avg_gate_truth
    avg_time_model = np.mean(model_times)
    avg_time_truth = np.mean(truth_times)
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
    s = ', please design a quantum algorithm to calculate the similarity $| '
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
