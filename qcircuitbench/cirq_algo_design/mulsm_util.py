import importlib.util
import random
import time
import cirq
import re
from sympy import Matrix
import numpy as np
from dataclasses import dataclass


def mod2(x):
    return x.as_numer_denom()[0] % 2


def recover_secret_string(n, results):
    equations = []
    for result, count in results.items():
        if result != '0' * n:  # We don't use all 0 string
            y = [int(bit) for bit in result]
            equations.append(y)
    if len(equations) == 0:
        return '0' * n
    else:
        result_s = post_processing(equations)
        return result_s


def post_processing(string_list):
    """
    A^T | I
    after the row echelon reduction, we can get the basis of the nullspace of A in I
    since we just need the string in binary form, so we can just use the basis
    if row == n-1 --> only one
    if row < n-1 --> get the first one (maybe correct or wrong)
    """
    M = Matrix(string_list).T

    # Augmented  : M | I
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))

    # RREF row echelon form , indices of the pivot columns
    # If x % 2 = 0, it will not be chosen as pivot (modulo 2)
    M_I_rref = M_I.rref(iszerofunc=lambda x: x % 2 == 0)

    # Modulo 2
    M_I_final = M_I_rref[0].applyfunc(mod2)

    # Non-Trivial solution
    if all(value == 0 for value in M_I_final[-1, :M.shape[1]]):
        result_s = "".join(str(c) for c in M_I_final[-1, M.shape[1]:])

    # Trivial solution
    else:
        result_s = '0' * M.shape[0]

    return result_s


def ground_truth_run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    simulator = cirq.Simulator()
    n = len(circuit.all_qubits())
    result = simulator.run(circuit, repetitions=n)
    meas = result.measurements
    keys = list(meas.keys())

    cnum = []
    for k in keys:
        m = re.fullmatch(r'c(\d+)', k)
        if m:
            cnum.append(int(m.group(1)))
    if not cnum:
        x_keys = sorted([k for k in keys if re.fullmatch(r'x\d+', k)],
                        key=lambda s: int(s[1:]))
        anc_key = 'anc' if 'anc' in keys else None
        if not x_keys or anc_key is None:
            raise ValueError(
                "Unable to infer data register and ancilla from measurement keys. Please check key naming.")
        data_keys = x_keys
        n = len(data_keys)
    else:
        max_idx = max(cnum)
        n = max_idx
        data_keys = [f'c{i}' for i in range(n)]
        anc_key = f'c{n}'
        if anc_key not in keys:
            anc_key = 'anc' if 'anc' in keys else None
            if anc_key is None:
                raise ValueError("Ancilla measurement key not found (neither 'c{n}' nor 'anc').")

    dic0 = {}
    dic1 = {}
    reps = next(iter(meas.values())).shape[0]

    for shot in range(reps):
        anc_bit = int(meas[anc_key][shot, 0])
        bits = ''.join(str(int(meas[k][shot, 0])) for k in data_keys[::-1])
        if anc_bit == 1:
            dic1[bits] = 1
        else:
            dic0[bits] = 1

    prediction1 = recover_secret_string(n, dic0)
    prediction2 = recover_secret_string(n, dic1)
    return prediction1, prediction2


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    n: int
    s1: str
    s2: str
    key_string: str
    reverse_bits: bool = True

    def _num_qubits_(self):
        return 2 * self.n + 1

    def _decompose_(self, qubits):
        n = self.n
        x = qubits[:n]
        y = qubits[n:2 * n]
        anc = qubits[2 * n]

        s1 = self.s1[::-1] if self.reverse_bits else self.s1
        s2 = self.s2[::-1] if self.reverse_bits else self.s2
        key = self.key_string[::-1] if self.reverse_bits else self.key_string

        for i in range(n):
            yield cirq.CNOT(x[i], y[i]).controlled_by(anc)

        if any(b == '1' for b in s1):
            i = s1.find('1')
            for j in range(n):
                if s1[j] == '1':
                    yield cirq.CNOT(x[i], y[j]).controlled_by(anc)

        yield cirq.X(anc)

        for i in range(n):
            yield cirq.CNOT(x[i], y[i]).controlled_by(anc)

        if any(b == '1' for b in s2):
            i = s2.find('1')
            for j in range(n):
                if s2[j] == '1':
                    yield cirq.CNOT(x[i], y[j]).controlled_by(anc)

        for j in range(n):
            if key[j] == '1':
                yield cirq.X(y[j])

    def _circuit_diagram_info_(self, args):
        labels = [f"x{i}" for i in range(self.n)] + [f"y{i}" for i in range(self.n)] + ["anc"]
        return labels


def load_algorithm_module(n):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"external_files/generalized_simon_multi/algorithm_circuit/multi_simon_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"multi_simon_n{n}", file_path)
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


def generate_random_strings(n):
    """Generates secret strings of length n as test cases."""
    selected_string = "".join(random.choice("01") for _ in range(n))
    return selected_string


def generate_oracle_gate(n):
    """Generates a random oracle gate for Multi-Simon."""
    secret_strings1 = generate_random_strings(n)
    secret_strings2 = generate_random_strings(n)
    while secret_strings2 == secret_strings1:
        secret_strings2 = generate_random_strings(n)
    key_strings = generate_random_strings(n)
    return Oracle(n, secret_strings1, secret_strings2, key_strings)


def expr_backtrack(expr: str, code_string: str, eval_globals: dict, local_vars: dict, default=float('nan')):
    try:
        value = eval(expr, eval_globals, local_vars)
        return int(value) if isinstance(value, int) else default
    except Exception as e:
        print(f"[Eval Error] expr='{expr}' → {e}")

    varname = expr.strip().split(".")[0]

    code_lines = code_string.splitlines()
    target_line_index = -1

    for i, line in enumerate(code_lines):
        if f"shots" in line and expr in line:
            target_line_index = i
            break

    if target_line_index == -1:
        print(f"[Backtrack] Can't locate line for 'shots={expr}'")
        return default

    pattern = re.compile(rf"^\s*{re.escape(varname)}\s*=\s*(.+)")
    for i in range(target_line_index - 1, -1, -1):
        match = pattern.match(code_lines[i])
        if match:
            rhs_expr = match.group(1).strip()
            try:
                val = eval(rhs_expr, eval_globals, local_vars)
                eval_globals[varname] = val
                print(f"[Resolved] {varname} = {rhs_expr} → {val}")
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
        algo_env = {"cirq": cirq}
        exec(algo_str, algo_env, algo_env)
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
        exec(post_proc_str, post_env, post_env)
        postprocess_fn = post_env["run_and_analyze"]
        circuit_gt = load_algorithm_module(n).algorithm(generate_oracle_gate(n))
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

    if not (circuit_syntax and code_syntax):
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
        secret_string1 = oracle_gate.s1
        secret_string2 = oracle_gate.s2
        key_string = oracle_gate.key_string

        try:
            # Model circuit
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = [
                postprocess_fn(circuit_model) for _ in range(shots_per_trial)
            ]
            model_times.append(time.time() - start)

            total_correct += sum(
                (pred1 == secret_string1 or pred2 == secret_string2)
                for (pred1, pred2) in predictions
            )

            # Ground truth circuit (just for timing)
            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start = time.time()
            prediction_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy()) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)

            if not any((pred1 == secret_string1 or pred2 == secret_string2) for (pred1, pred2) in prediction_gt):
                print(
                    f"[✗] Ground truth prediction mismatch: {prediction_gt} not in {secret_string1, secret_string2}"
                )
                break

        except Exception as e:
            print(f"[✗] Runtime error during trial (secret_string1={secret_string1}, secret_string2={secret_string2}):",
                  e)
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
    s = 'the secret strings $s_1$ and $s_2$'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
