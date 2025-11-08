import importlib.util
import random
import time
import re
import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    """Phase oracle for Grover's algorithm.

    Given a bitstring `marked_state` of length n, this gate applies a phase flip (-1)
    to |marked_state⟩. Implementation mirrors the Qiskit version:

    - Apply X to qubits where marked_state bit == '0' (open controls)
    - Apply (n-1)-controlled Z with target = last qubit
    - Undo the X on those zero positions

    """

    marked_state: str  # e.g., '1010'

    def _num_qubits_(self) -> int:
        return len(self.marked_state)

    def _decompose_(self, qubits):
        n = len(qubits)
        zeros = [i for i, b in enumerate(self.marked_state) if b == "0"]

        # Open controls: flip zeros to turn the pattern into all-ones on controls
        for i in zeros:
            yield cirq.X(qubits[i])

        # Multi-controlled Z with controls = qubits[:-1], target = qubits[-1]
        # (phase flip when all controls are 1)
        yield cirq.Z.controlled(num_controls=n - 1).on(*qubits)

        # Undo open controls
        for i in zeros:
            yield cirq.X(qubits[i])

    def _circuit_diagram_info_(self, args):
        # Nice labels: m0..m{n-1}
        return tuple([f"m{i}" for i in range(len(self.marked_state))])


def ground_truth_run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and return the measured bitstring.
    Assumes the circuit measures each qubit with keys 'c0'...'c{n-1}'.
    """
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)
    n = len(result.measurements)
    prediction = "".join(str(result.measurements[f"c{i}"][0][0]) for i in range(n))
    return prediction


def load_algorithm_module(n: int):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"./algorithm_circuit/grover_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"grover_n{n}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def measure_gate_count(circuit: cirq.Circuit) -> int:
    """Count non-measurement gates in a Cirq circuit."""
    flat = [
        op.gate
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
           and not isinstance(op.gate, cirq.MeasurementGate)
    ]
    return len(flat)


def generate_oracle_gate(n: int) -> Oracle:
    """Generates a random Grover oracle (phase flip) over n data qubits."""
    marked_item = "".join(random.choices("01", k=n))
    return Oracle(marked_item)


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

    # Find line where repetitions appears using the expression
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
    """Verify Grover algorithm & post-processing strings in Cirq and compute metrics."""
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # 1) Algorithm syntax
    try:
        algo_env = {}
        exec(algo_str, algo_env, algo_env)
        algorithm_fn = algo_env["algorithm"]
        oracle_gate = generate_oracle_gate(n)
        circuit_algo = algorithm_fn(oracle_gate)
        cirq.Simulator().run(circuit_algo)
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2) Post-processing syntax
    try:
        post_env = {}
        exec(post_proc_str, post_env, post_env)
        postprocess_fn = post_env["run_and_analyze"]
        # quick smoke-test using ground-truth algorithm module
        circuit_gt = load_algorithm_module(n).algorithm(generate_oracle_gate(n))
        try:
            _ = postprocess_fn(circuit_gt.copy())
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:
                    algo_env = {}
                    exec(algo_str, globals(), algo_env)
                    algorithm_fn = algo_env["algorithm"]
                    oracle_gate = generate_oracle_gate(n)
                    circuit_algo = algorithm_fn(oracle_gate)
                    _ = postprocess_fn(circuit_algo.copy())
                    code_syntax = 1
                except Exception as e:
                    raise
            raise
        print("[✓] Post-processing code loaded successfully.")
    except Exception as e:
        print("[✗] Post-processing syntax error:", e)
        postprocess_fn = ground_truth_run_and_analyze  # fall back

    if not (circuit_syntax and code_syntax):
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # 3) Evaluation
    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times = []
    truth_times = []

    for trial in range(num_trials):
        oracle_gate = generate_oracle_gate(n)
        marked_item = oracle_gate.marked_state
        try:
            # Model circuit
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = [
                postprocess_fn(circuit_model) for _ in range(shots_per_trial)
            ]
            model_times.append(time.time() - start)
            total_correct += sum(pred == marked_item for pred in predictions)

            # Ground-truth circuit (timing & sanity)
            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start = time.time()
            preds_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy())
                for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)
            if not all(p == marked_item for p in preds_gt):
                print(f"[✗] Ground truth mismatch: {preds_gt} vs {marked_item}")
                break

        except Exception as e:
            print(f"[✗] Runtime error during trial (marked={marked_item}):", e)
            return (
                circuit_syntax,
                code_syntax,
                result_score,
                gate_count_ratio,
                shot_ratio,
                time_ratio,
            )

    # 4) Shot ratio from code string if present; default 1
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

    # 5) Metrics
    shot_truth = 1
    shot_ratio = shot_model / shot_truth if shot_truth else float("inf")
    result_score = total_correct / total_shots if total_shots else 0.0

    avg_gate_count_model = (
        sum(gate_counts) / len(gate_counts) if gate_counts else float("nan")
    )

    avg_gate_count_truth = measure_gate_count(
        load_algorithm_module(n).algorithm(generate_oracle_gate(n))
    )
    gate_count_ratio = (
        avg_gate_count_model / avg_gate_count_truth
        if avg_gate_count_truth and avg_gate_count_truth == avg_gate_count_truth
        else float("nan")
    )

    avg_time_model = (
        sum(model_times) / len(model_times) if model_times else float("nan")
    )
    avg_time_truth = (
        sum(truth_times) / len(truth_times) if truth_times else float("nan")
    )
    time_ratio = (
        avg_time_model / avg_time_truth
        if avg_time_truth and avg_time_truth == avg_time_truth
        else float("nan")
    )

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


def check_description(prompt):
    s = 'Consider an unstructured search problem.'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
