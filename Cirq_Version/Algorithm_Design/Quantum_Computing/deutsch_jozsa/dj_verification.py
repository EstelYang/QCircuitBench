import importlib.util
import random
import time
import os
import re
import cirq
from dataclasses import dataclass


def ground_truth_run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)
    n = len(result.measurements)
    output_bits = "".join(str(result.measurements[f"c{i}"][0][0]) for i in range(n))
    if "1" in output_bits:
        prediction = "balanced"
    else:
        prediction = "constant"
    return prediction


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    is_constant: bool
    key_string: str

    def _num_qubits_(self):
        return len(self.key_string) + 1

    def _decompose_(self, qubits):
        n = len(qubits) - 1
        control_qubits = qubits[:n]
        target_qubit = qubits[n]

        if self.is_constant:
            if self.key_string[-1] == "1":
                yield cirq.X(target_qubit)
            else:
                yield cirq.I(target_qubit)
        else:
            for i, bit in enumerate(self.key_string[:n]):
                if bit == "1":
                    yield cirq.X(control_qubits[i])

            for i in range(n):
                yield cirq.CNOT(control_qubits[i], target_qubit)

            for i, bit in enumerate(self.key_string[:n]):
                if bit == "1":
                    yield cirq.X(control_qubits[i])

    def _circuit_diagram_info_(self, args):
        return [f"s{i}" for i in range(self.num_qubits() - 1)] + ["oracle_target"]

    def __eq__(self, other):
        return (
                isinstance(other, Oracle)
                and self.is_constant == other.is_constant
                and self.key_string == other.key_string
        )

    def __hash__(self):
        return hash((Oracle, self.is_constant, self.key_string))


def load_algorithm_module(n):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"./algorithm_circuit/deutsch_jozsa_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"dj_n{n}", file_path)
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
    """Generates a random oracle gate for Deutsch-Jozsa."""
    is_constant = random.choice([True, False])
    key_string = "".join(random.choices("01", k=n))
    return Oracle(is_constant, key_string)


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
    """Verify Deutsch-Jozsa circuits across a range of qubit counts."""
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
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2. Check post-processing syntax
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
        is_constant = oracle_gate.is_constant
        key_string = oracle_gate.key_string

        try:
            # Model circuit
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start_time = time.time()
            predictions = [
                postprocess_fn(circuit_model.copy()) for _ in range(shots_per_trial)
            ]
            model_times.append(time.time() - start_time)
            total_correct += sum(
                pred == ("constant" if is_constant else "balanced")
                for pred in predictions
            )

            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start_time = time.time()
            predictions_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy()) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start_time)
            for pred in predictions_gt:
                if (is_constant and pred == "balanced") or (
                        not is_constant and pred == "constant"
                ):
                    print(
                        f"[✗] Ground truth prediction mismatch: {pred} for key {key_string}, is_constant={is_constant}"
                    )
                    break

        except Exception as e:
            print(
                f"[✗] Runtime error in trial {trial} (is_constant={is_constant}, secret={key_string}): {e}"
            )
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

    # Compute metrics
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
    s = 'The function is known to be either constant (outputs $0$ for all inputs or $1$ for all inputs) or balanced (outputs $0$ for half of the inputs and  $1$ for the other half).'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
