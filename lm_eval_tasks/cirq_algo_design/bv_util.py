import importlib.util
import random
import time
import cirq
import re
from dataclasses import dataclass


def ground_truth_run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)
    n = len(result.measurements)
    output_bits = "".join(str(result.measurements[f"c{i}"][0][0]) for i in range(n))
    return output_bits


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    secret_string: str

    def _num_qubits_(self):
        return len(self.secret_string) + 1

    def _decompose_(self, qubits):
        controls = qubits[:-1]
        target = qubits[-1]
        for i, bit in enumerate(self.secret_string):
            if bit == "1":
                yield cirq.CX(controls[i], target)

    def _circuit_diagram_info_(self, args):
        return [f"s{i}" for i in range(self.num_qubits() - 1)] + ["oracle_target"]


def load_algorithm_module(n):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"external_files/bernstein_vazirani/algorithm_circuit/bernstein_vazirani_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"bv_n{n}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


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


def generate_oracle_gate(n):
    """Generates a random oracle gate for Bernstein-Vazirani."""
    secret_string = "".join(random.choices("01", k=n))
    return Oracle(secret_string)


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

    # 1. Check algorithm (circuit generation) syntax
    try:
        algo_env = {}
        exec(algo_str, globals(), algo_env)
        algorithm_fn = algo_env["algorithm"]
        oracle_gate = generate_oracle_gate(n)
        circuit_algo = algorithm_fn(oracle_gate)
        simulator = cirq.Simulator()
        simulator.run(circuit_algo)
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
        circuit_gt = load_algorithm_module(n).algorithm(generate_oracle_gate(n))
        try:
            result = postprocess_fn(circuit_gt.copy())
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:
                    algo_env = {}
                    exec(algo_str, globals(), algo_env)
                    algorithm_fn = algo_env["algorithm"]
                    oracle_gate = generate_oracle_gate(n)
                    circuit_algo = algorithm_fn(oracle_gate)
                    result = postprocess_fn(circuit_algo.copy())
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

    # 3. Run evaluation (if syntax is valid)
    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times = []
    truth_times = []

    for trial in range(num_trials):
        oracle_gate = generate_oracle_gate(n)
        secret_string = oracle_gate.secret_string

        try:
            # Model circuit
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = [
                postprocess_fn(circuit_model) for _ in range(shots_per_trial)
            ]
            model_times.append(time.time() - start)
            total_correct += sum(pred == secret_string for pred in predictions)

            # Ground truth circuit (just for timing)
            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start = time.time()
            prediction_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy()) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)
            if not all(pred == secret_string for pred in prediction_gt):
                print(
                    f"[✗] Ground truth prediction mismatch: {prediction_gt} != {secret_string}"
                )
                break

        except Exception as e:
            print(f"[✗] Runtime error during trial (secret={secret_string}):", e)
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
        load_algorithm_module(n).algorithm(generate_oracle_gate(n))
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
    try:
        s = "The function is guaranteed to return the bitwise product of the input with a secret string $s"
        if s in prompt:
            n = int(prompt.split("$n = ")[1].split("$")[0])
            return s in prompt, {"n": n}
        else:
            return False, {}
    except Exception as e:
        import pdb;
        pdb.set_trace()
