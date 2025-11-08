import importlib.util
import random
import time
import cirq
import re
from sympy import Matrix
import numpy as np
from sympy import S
import math
from typing import List, Tuple, Iterable, Optional


def binary_to_ternary(binary_str):
    """
    Convert binary qubit results to a ternary qudit string.
    """
    return ''.join(str(int(binary_str[i:i + 2], 2)) for i in range(0, len(binary_str), 2))


def ternary_to_binary(ternary_str):
    """
    Convert a ternary string to a binary string (two bits per ternary digit).
    """
    return ''.join(format(int(digit), '02b') for digit in ternary_str)


def mod3(x):
    return S(x % 3)


def rref_mod3(M):
    """
    Compute the Reduced Row Echelon Form of matrix M mod 3.
    """

    M = M.applyfunc(mod3)  # Ensure the matrix is in mod 3 to start
    rows, cols = M.shape
    r = 0  # Row index
    pivot_cols = []  # Keep track of pivot columns

    for c in range(cols):
        # Find the pivot row
        pivot_row = None
        for ri in range(r, rows):
            if M[ri, c] != 0:
                pivot_row = ri
                break

        if pivot_row is None:
            continue  # Skip this column, it's all zeros under current row

        # Swap the current row with found pivot row
        if pivot_row != r:
            M.row_swap(pivot_row, r)

        # Normalize the pivot row (make the pivot position 1)
        pivot_val = M[r, c]
        if pivot_val != 1:  # If pivot is already 1, skip multiplying
            inv_pivot_val = mod3(pow(pivot_val, -1, 3))
            for j in range(cols):  # Normalize pivot row
                M[r, j] = mod3(inv_pivot_val * M[r, j])

        # Eliminate all other entries in this column
        for ri in range(rows):
            if ri != r and M[ri, c] != 0:
                multiplier = M[ri, c]
                for j in range(cols):  # Eliminate other rows
                    M[ri, j] = mod3(M[ri, j] - multiplier * M[r, j])

        pivot_cols.append(c)
        r += 1

        if r == rows:
            break

    return M, pivot_cols


def recover_secret_string_3d(n, results):
    """
    Recover the secret string for the 3-dimensional Simon problem by analyzing the provided measurement results.

    This function processes the results from Simon's algorithm to deduce the secret string based on the
    observed outputs. It constructs a system of linear equations over Z_3 (the integers modulo 3) and solves
    it to find the secret string that explains the observed results under the promise of the problem.

    Parameters:
    - n (int): Number of qudits, each represented by 2 qubits.
    - results (dict): A dictionary mapping measured states (as bit strings) to their frequency of occurrence.
    - s (str): The actual secret string, used for validating the recovered string in simulation.

    Returns:
    - tuple: A pair (recovered_secret, found) where:
        - recovered_secret (str): The recovered secret string, or '0' * n if no solution is found.
        - found (int): 1 if a solution consistent with the secret string is found, 0 otherwise.

    Approach:
    - Convert measurement results into a matrix representation.
    - Solve the linear system of equations modulo 3 to find the secret string.
    - Compare the recovered solution to the provided secret string.
    """
    equations = []
    for result, count in results.items():
        if result != '0' * (2 * n):  # Exclude the all-zero string in binary form
            ternary_result = binary_to_ternary(result)
            y = [int(digit) for digit in ternary_result]
            equations.append(y)

    if not equations:
        return '0' * n, 0  # No non-trivial equations to process

    # Convert the list of equations into a matrix over Z_3
    M = Matrix(equations).applyfunc(mod3).T

    # Augmented matrix M | I over Z_3
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))

    # Row Echelon Form with modulo 3 adjustments
    def is_zero_mod3(x):
        return mod3(x) == 0

    M_I_rref = rref_mod3(M_I)

    M_I_final = M_I_rref[0].applyfunc(lambda x: x % 3)

    # Attempt to find the solution vector
    null_space_found = False
    first_solution = '0' * n

    for i in range(M_I_final.rows):
        if all(is_zero_mod3(val) for val in M_I_final.row(i)[:M.cols]):
            # This row can provide a solution
            solution_vector = [int(M_I_final.row(i)[j]) for j in range(M.cols, M_I_final.cols)]
            result_s = ''.join(str(x) for x in solution_vector)

            if not null_space_found:
                null_space_found = True
                first_solution = result_s

    return first_solution


def ground_truth_run_and_analyze(circuit):
    n = len(circuit.all_qubits()) // 2
    simulator = cirq.Simulator()
    results = simulator.run(circuit, repetitions=n)
    meas = results.measurements
    keys = list(meas.keys())

    cnum = []
    for k in keys:
        m = re.fullmatch(r'c(\d+)', k)
        if m:
            cnum.append(int(m.group(1)))
    if cnum:
        K = max(cnum)
        data_keys = [f'c{i}' for i in range(K + 1)]
    else:
        xnum = []
        for k in keys:
            m = re.fullmatch(r'x(\d+)', k)
            if m:
                xnum.append(int(m.group(1)))
        if not xnum:
            raise ValueError("No data measurement keys found (expected c0.. or x0..).")
        K = max(xnum)
        data_keys = [f'x{i}' for i in range(K + 1)]

    counts: dict[str, int] = {}
    reps = next(iter(meas.values())).shape[0]
    for shot in range(reps):
        bitstr = ''.join(str(int(meas[k][shot, 0])) for k in data_keys)
        counts[bitstr] = counts.get(bitstr, 0) + 1
    prediction = recover_secret_string_3d(n, counts)
    return prediction


def encode_trit_to_bits(t: int) -> Tuple[int, int]:
    if t == 0:
        return (0, 0)
    if t == 1:
        return (0, 1)
    if t == 2:
        return (1, 0)
    raise ValueError("trit must be 0/1/2")


def bits_for_ternary_string(s: str) -> List[int]:
    out = []
    for ch in s:
        b0, b1 = encode_trit_to_bits(int(ch))
        out.extend([b0, b1])
    return out


def add_ternary_str(a: str, b: str) -> str:
    return ''.join(str((int(x) + int(y)) % 3) for x, y in zip(a, b))


def all_ternary_strings(n: int) -> List[str]:
    if n == 0:
        return [""]
    smaller = all_ternary_strings(n - 1)
    return [x + d for x in smaller for d in "012"]


def compute_cycles(n: int, secret: str) -> List[List[str]]:
    universe = all_ternary_strings(n)
    seen = set()
    cycles: List[List[str]] = []
    for start in universe:
        if start in seen:
            continue
        cur = start
        cyc = []
        while cur not in seen:
            seen.add(cur)
            cyc.append(cur)
            cur = add_ternary_str(cur, secret)
        cycles.append(cyc)
    return cycles


class Oracle(cirq.Gate):
    def __init__(self, n: int, secret_string: str, key_string: Optional[str] = None):
        if len(secret_string) != n or any(ch not in "012" for ch in secret_string):
            raise ValueError("secret_string must be length n over '0','1','2'")
        self.n = n
        self.secret_string = secret_string
        self.cycles = compute_cycles(n, secret_string)
        self.anc_bits = max(1, math.ceil(math.log2(len(self.cycles)))) if len(self.cycles) > 1 else 1
        if key_string is not None:
            if any(ch not in "01" for ch in key_string):
                raise ValueError("key_string must be binary str")
            km = key_string[:self.anc_bits]
            km = km + "0" * (self.anc_bits - len(km))
            self.key_string = km
        else:
            self.key_string = "0" * self.anc_bits

    def _num_qubits_(self) -> int:
        return 2 * self.n + self.anc_bits

    def _decompose_(self, qubits: Iterable[cirq.Qid]) -> Iterable[cirq.Operation]:
        qubits = list(qubits)
        x_reg = qubits[: 2 * self.n]
        anc = qubits[2 * self.n: 2 * self.n + self.anc_bits]

        for cycle_idx, cycle in enumerate(self.cycles):
            bin_k = format(cycle_idx, f'0{self.anc_bits}b')
            if all(b == '0' for b in bin_k):
                continue
            for t in cycle:
                ctrl_pattern = bits_for_ternary_string(t)
                control_values = tuple(ctrl_pattern)
                for j, bj in enumerate(bin_k):
                    if bj == '1':
                        yield cirq.X(anc[j]).controlled_by(*x_reg, control_values=control_values)
        for j, bit in enumerate(self.key_string):
            if bit == '1':
                yield cirq.X(anc[j])

    def _circuit_diagram_info_(self, args):
        return [f"x[{i}]" for i in range(2 * self.n)] + [f"anc[{i}]" for i in range(self.anc_bits)]


def load_algorithm_module(n):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"./algorithm_circuit/ternary_simon_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"ternary_simon_n{n}", file_path)
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
    selected_string = "".join(random.choice("012") for _ in range(n))
    return selected_string


def generate_oracle_gate(n):
    """Generates a random oracle gate for Multi-Simon."""
    secret_strings = generate_random_strings(n)
    while secret_strings == '0' * n:
        secret_strings = generate_random_strings(n)

    key_strings = "".join(random.choice("01") for _ in range(n))

    return Oracle(n, secret_strings, key_strings)


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
        algo_env = {"cirq": cirq, "np": np}
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
        secret_string = oracle_gate.secret_string
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

            n = len(secret_string)
            equivalents = set()
            equivalents.add(secret_string)
            rotated_string = ''.join(
                str((int(secret_string[i]) + int(secret_string[i])) % 3) for i in range(len(secret_string)))
            equivalents.add(rotated_string)

            total_correct += sum(pred in equivalents for pred in predictions)

            # Ground truth circuit (just for timing)
            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start = time.time()
            prediction_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy()) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)

            if not any(pred in equivalents for pred in prediction_gt):
                print(
                    f"[✗] Ground truth prediction mismatch: {prediction_gt} not in {secret_string}"
                )
                break

        except Exception as e:
            print(f"[✗] Runtime error during trial (secret_string={secret_string}):",
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
    s = ' each ternary digit (trit) is represen'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
