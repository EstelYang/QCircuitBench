import importlib.util
import random
import time
import cirq
import re
import numpy as np
from sympy import Matrix
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    secret_string: str
    key_string: str

    def _num_qubits_(self):
        return 2 * len(self.secret_string)

    def _decompose_(self, qubits):
        n = len(self.secret_string)
        control_qubits = qubits[:n]
        target_qubits = qubits[n:]

        # Apply copy operation
        for i in range(n):
            yield cirq.CX(control_qubits[i], target_qubits[i])

        # Apply s-dependent XOR
        if self.secret_string != "0" * n:
            i = self.secret_string.find("1")
            for j in range(n):
                if self.secret_string[j] == "1":
                    yield cirq.CX(control_qubits[i], target_qubits[j])

        # Apply X gates for key_string
        for i in range(n):
            if self.key_string[i] == "1":
                yield cirq.X(target_qubits[i])

    def _circuit_diagram_info_(self, args):
        return [f"s{i}" for i in range(len(self.secret_string))] + [
            f"oracle_target{i}" for i in range(len(self.key_string))
        ]


def mod2(x):
    return x.as_numer_denom()[0] % 2


def solve_equation(string_list):
    """
    Given a list of binary strings (as lists of bits), solve for the secret string s
    such that s · y = 0 (mod 2) for each y in the list.
    """
    M = Matrix(string_list).T
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))
    M_I_rref = M_I.rref(iszerofunc=lambda x: x % 2 == 0)
    M_I_final = M_I_rref[0].applyfunc(mod2)

    if all(value == 0 for value in M_I_final[-1, : M.shape[1]]):
        result_s = "".join(str(c) for c in M_I_final[-1, M.shape[1] :])
    else:
        result_s = "0" * M.shape[0]

    return result_s


def ground_truth_run_and_analyze(circuit):
    """Run the Simon circuit and extract the predicted secret string."""
    simulator = cirq.Simulator()
    n = len(circuit.all_qubits()) // 2
    result = simulator.run(circuit, repetitions=n)

    equations = []
    for i in range(n):
        bits = [int(result.measurements[f"c{j}"][i][0]) for j in range(n)]
        # print(f"Measurement {i}: {bits}")
        if any(bits):  # skip all-zero vectors
            equations.append(bits)

    if not equations:
        return "0" * n
    return solve_equation(equations)



def load_algorithm_module(n):
    file_path = f"./algorithm_circuit/simon_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"simon_n{n}", file_path)
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
    """Generates a random oracle gate for Simon's algorithm."""
    secret_string = "".join(random.choices("01", k=n))
    key_string = "".join(random.choices("01", k=n))
    return Oracle(secret_string, key_string)


def expr_backtrack(expr, code_string, eval_globals, local_vars, default=float("nan")):
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

    try:
        post_env = {}
        exec(post_proc_str, globals(), post_env)
        postprocess_fn = post_env["run_and_analyze"]
        oracle_gate = generate_oracle_gate(n)
        circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
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

    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times = []
    truth_times = []

    for trial in range(num_trials):
        oracle_gate = generate_oracle_gate(n)
        while oracle_gate.secret_string == "0" * n:
            oracle_gate = generate_oracle_gate(n)
        secret_string = oracle_gate.secret_string
        key_string = oracle_gate.key_string

        try:
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = [
                postprocess_fn(circuit_model.copy()) for _ in range(shots_per_trial)
            ]
            model_times.append(time.time() - start)
            total_correct += sum(pred == secret_string for pred in predictions)

            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start = time.time()
            predictions_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy()) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)
            accuracy_gt = (
                sum(pred == secret_string for pred in predictions_gt) / shots_per_trial
            )
            if accuracy_gt < 0.25:
                print(
                    f"[✗] Ground truth prediction accuracy {accuracy_gt:.2f} < 2/3 for secret={secret_string}"
                )
                print(f"   Predictions: {predictions_gt}")
                print(f"   Expected: {secret_string}")
                break

        except Exception as e:
            print(f"[✗] Runtime error (secret={secret_string}):", e)
            return (
                circuit_syntax,
                code_syntax,
                result_score,
                gate_count_ratio,
                shot_ratio,
                time_ratio,
            )

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
            shot_expr, post_proc_str, eval_globals, local_vars, default=n
        )
    else:
        shot_model = 1

    shot_truth = n
    shot_ratio = shot_model / shot_truth
    result_score = total_correct / total_shots
    avg_gate_model = sum(gate_counts) / num_trials
    avg_gate_truth = measure_gate_count(
        load_algorithm_module(n).algorithm(generate_oracle_gate(n))
    )
    gate_count_ratio = avg_gate_model / avg_gate_truth

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
    s = 'The function is guaranteed to be a two-to-one mapping according to a secret string'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
