import importlib.util
import random
import time
import cirq
import re
import numpy as np
from dataclasses import dataclass


def ground_truth_run_and_analyze(circuit):
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)

    n = len(result.measurements)
    output_bits = "".join(
        str(result.measurements[f"c{i}"][0][0]) for i in reversed(range(n))
    )
    y = int(output_bits, 2)
    prediction = y / (2 ** n) * 2 * np.pi

    return prediction


@dataclass(frozen=True)
class PsiGate(cirq.Gate):
    """Prepare the eigenstate |1⟩ on the target qubit."""

    def _num_qubits_(self):
        return 1

    def _decompose_(self, qubits):
        yield cirq.X(qubits[0])

    def _circuit_diagram_info_(self, args):
        return ["Psi"]


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    """Controlled-U gate."""

    theta: float

    def _num_qubits_(self):
        return 2  # control, target

    def _decompose_(self, qubits):
        control, target = qubits
        yield cirq.CZPowGate(exponent=self.theta / np.pi).on(control, target)

    def _circuit_diagram_info_(self, args):
        return [f"CU({self.theta})_ctrl", f"CU({self.theta})_tgt"]

    def __pow__(self, power):
        return Oracle(theta=self.theta * power)


def load_algorithm_module(n):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"external_files/phase_estimation/algorithm_circuit/phase_estimation_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"phase_estimation_n{n}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def measure_gate_count(circuit):
    """Count non-measurement gates in a Cirq circuit."""
    flat = [
        op.gate
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
           and not isinstance(op.gate, cirq.MeasurementGate)
    ]
    return len(flat)


def generate_oracle_gate(n):
    """Generates a random Oracle gate for phase estimation with known theta."""
    theta = random.uniform(0, 2 * np.pi)
    return Oracle(theta), theta


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


def check_model(algo_str, post_proc_str, n, num_trials=10, shots_per_trial=10):
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    psi_gate = PsiGate()

    # 1. Check algorithm syntax
    try:
        algo_env = {}
        exec(algo_str, algo_env, algo_env)
        algorithm_fn = algo_env["algorithm"]
        oracle_gate, _ = generate_oracle_gate(n)
        circuit = algorithm_fn(oracle_gate, psi_gate)
        sim = cirq.Simulator()
        sim.run(circuit)
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2. Check post-processing code syntax
    try:
        post_env = {}
        exec(post_proc_str, post_env, post_env)
        postprocess_fn = post_env["run_and_analyze"]
        oracle_gate, _ = generate_oracle_gate(n)
        circuit = load_algorithm_module(n).algorithm(oracle_gate, psi_gate)
        try:
            postprocess_fn(circuit.copy())
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:
                    algo_env = {}
                    exec(algo_str, globals(), algo_env)
                    algorithm_fn = algo_env["algorithm"]
                    oracle_gate = generate_oracle_gate(n)
                    circuit_algo = algorithm_fn(oracle_gate, psi_gate)
                    postprocess_fn(circuit_algo.copy())
                    code_syntax = 1
                except Exception as e:
                    raise
            raise
        print("[✓] Post-processing code loaded successfully.")
    except Exception as e:
        print("[✗] Post-processing syntax error:", e)

    if not (circuit_syntax and code_syntax):
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # 3. Evaluate model
    total_correct = 0
    total_shots = num_trials * shots_per_trial
    model_times = []
    truth_times = []
    gate_counts = []

    for trial in range(num_trials):
        oracle_gate, theta = generate_oracle_gate(n)
        tol = 2 * np.pi / (2 ** n)
        try:
            circuit_model = algorithm_fn(oracle_gate, psi_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = [
                postprocess_fn(circuit_model) for _ in range(shots_per_trial)
            ]
            model_times.append(time.time() - start)
            total_correct += sum(abs(pred - theta) <= tol for pred in predictions)

            circuit_truth = load_algorithm_module(n).algorithm(oracle_gate, psi_gate)
            start = time.time()
            predictions_gt = [
                ground_truth_run_and_analyze(circuit_truth.copy()) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)

        except Exception as e:
            print(f"[✗] Runtime error during trial (θ = {theta:.4f}):", e)
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
    shot_truth = 1
    shot_ratio = shot_model / shot_truth

    result_score = total_correct / total_shots
    avg_gate_count_model = sum(gate_counts) / num_trials
    avg_gate_count_truth = measure_gate_count(
        load_algorithm_module(n).algorithm(generate_oracle_gate(n)[0], psi_gate)
    )
    gate_count_ratio = avg_gate_count_model / avg_gate_count_truth
    avg_time_model = sum(model_times) / num_trials
    avg_time_truth = sum(truth_times) / num_trials
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
    s = 'Given a black box unitary transformation $U$ and a quantum state'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
