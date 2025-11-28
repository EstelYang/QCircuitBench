import importlib.util
import time
import cirq
import re
import math, array, fractions
import random
from dataclasses import dataclass
from typing import Iterable, List
import numpy as np


def get_factors(x_value, t_upper, N, a):
    if x_value <= 0:
        return None
    T = pow(2, t_upper)
    x_over_T = x_value / T
    i = 0
    b = array.array('i')
    t = array.array('f')
    b.append(math.floor(x_over_T))
    t.append(x_over_T - b[i])
    while i >= 0:
        if i > 0:
            b.append(math.floor(1 / (t[i - 1])))
            t.append((1 / (t[i - 1])) - b[i])
        aux = 0
        j = i
        while j > 0:
            aux = 1 / (b[j] + aux)
            j = j - 1
        aux = aux + b[0]
        frac = fractions.Fraction(aux).limit_denominator()
        den = frac.denominator
        i = i + 1

        if (den % 2) == 1:
            if i >= 15:
                return None
            continue
        exponential = 0
        if den < 1000:
            exponential = pow(a, (den / 2))
        if math.isinf(exponential) == 1 or exponential > 1000000000:
            aux_out = random.choice([0, 1])
            if aux_out != '1':
                return None
            else:
                continue

        putting_plus = int(exponential + 1)
        putting_minus = int(exponential - 1)
        one_factor = math.gcd(putting_plus, N)
        other_factor = math.gcd(putting_minus, N)

        if one_factor == 1 or one_factor == N or other_factor == 1 or other_factor == N:
            if t[i - 1] == 0:
                return None
            else:
                return None
        else:
            return one_factor, other_factor


def ground_truth_run_and_analyze(circuit, N: int, a: int):
    sim = cirq.Simulator()

    result = sim.run(circuit, repetitions=1)
    n = math.ceil(math.log2(N))
    twon = 2 * n

    if 'm_up' in result.measurements:
        row = result.measurements['m_up'][0]
        bitstr = ''.join(str(int(b)) for b in row[::-1])
    else:
        bits = []
        for i in reversed(range(twon)):
            arr = result.measurements[f'c{i}']
            val = int(arr[0]) if arr.ndim == 1 else int(arr[0][0])
            bits.append(str(val))
        bitstr = ''.join(bits)

    x = int(bitstr, 2)

    factors = get_factors(x, 2 * n, N, a)

    return factors


def _egcd(a: int, b: int):
    if a == 0:
        return (b, 0, 1)
    g, y, x = _egcd(b % a, a)
    return (g, x - (b // a) * y, y)


def _modinv(a: int, m: int) -> int:
    g, x, _ = _egcd(a % m, m)
    if g != 1:
        raise ValueError("modular inverse does not exist")
    return x % m


def _qft(qubits: List[cirq.Qid], with_swaps: bool = False):
    n = len(qubits)
    for i in range(n - 1, -1, -1):
        yield cirq.H(qubits[i])
        for j in range(i):
            angle = np.pi / (2 ** (i - j))
            yield cirq.ZPowGate(exponent=angle / np.pi).on(qubits[j]).controlled_by(qubits[i])
    if with_swaps:
        for i in range(n // 2):
            yield cirq.SWAP(qubits[i], qubits[n - 1 - i])


def _iqft(qubits: List[cirq.Qid], with_swaps: bool = False):
    n = len(qubits)
    if with_swaps:
        for i in range(n // 2):
            yield cirq.SWAP(qubits[i], qubits[n - 1 - i])
    for i in range(n):
        yield cirq.H(qubits[i])
        for j in range(i):
            angle = -np.pi / (2 ** (i - j))
            yield cirq.ZPowGate(exponent=angle / np.pi).on(qubits[j]).controlled_by(qubits[i])


def _get_angles(a: int, n_bits: int) -> List[float]:
    bits = bin(a)[2:].zfill(n_bits)
    angles = np.zeros(n_bits)
    for i in range(n_bits):
        for j in range(i, n_bits):
            if bits[j] == '1':
                angles[n_bits - i - 1] += 2 ** -(j - i)
        angles[n_bits - i - 1] *= np.pi
    return angles.tolist()


def _phiADD(q: List[cirq.Qid], a: int, n_bits: int, inv: bool = False):
    sgn = -1.0 if inv else 1.0
    angles = _get_angles(a, n_bits)
    for i, ang in enumerate(angles):
        yield cirq.ZPowGate(exponent=(sgn * ang) / np.pi).on(q[i])


def _cphiADD(q: List[cirq.Qid], ctl: cirq.Qid, a: int, n_bits: int, inv: bool = False):
    sgn = -1.0 if inv else 1.0
    angles = _get_angles(a, n_bits)
    for i, ang in enumerate(angles):
        yield cirq.ZPowGate(exponent=(sgn * ang) / np.pi).on(q[i]).controlled_by(ctl)


def _ccphiADD(q: List[cirq.Qid], ctl1: cirq.Qid, ctl2: cirq.Qid, a: int, n_bits: int, inv: bool = False):
    sgn = -1.0 if inv else 1.0
    angles = _get_angles(a, n_bits)
    for i, ang in enumerate(angles):
        yield cirq.ZPowGate(exponent=(sgn * ang) / np.pi).on(q[i]).controlled_by(ctl1, ctl2)


def _ccphiADDmodN(q: List[cirq.Qid], ctl1: cirq.Qid, ctl2: cirq.Qid, aux_flag: cirq.Qid,
                  a: int, N: int, n_bits_for_q: int):
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=False)
    yield from _phiADD(q, N, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield from _qft(q, with_swaps=False)
    yield from _cphiADD(q, aux_flag, N, n_bits_for_q, inv=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.X(q[n_bits_for_q - 1])
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield cirq.X(q[n_bits_for_q - 1])
    yield from _qft(q, with_swaps=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=False)


def _ccphiADDmodN_inv(q: List[cirq.Qid], ctl1: cirq.Qid, ctl2: cirq.Qid, aux_flag: cirq.Qid,
                      a: int, N: int, n_bits_for_q: int):
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.X(q[n_bits_for_q - 1])
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield cirq.X(q[n_bits_for_q - 1])
    yield from _qft(q, with_swaps=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=False)
    yield from _cphiADD(q, aux_flag, N, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield from _qft(q, with_swaps=False)
    yield from _phiADD(q, N, n_bits_for_q, inv=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=True)


def _cMULTmodN(ctl: cirq.Qid, down: List[cirq.Qid], aux: List[cirq.Qid],
               a: int, N: int, n: int):
    aux_reg = aux[:n + 1]
    aux_flag = aux[n + 1]

    yield from _qft(aux_reg, with_swaps=False)

    for i in range(n):
        coeff = (pow(2, i, N) * a) % N
        if coeff == 0:
            continue
        yield from _ccphiADDmodN(aux_reg, down[i], ctl, aux_flag, coeff, N, n_bits_for_q=len(aux_reg))

    yield from _iqft(aux_reg, with_swaps=False)

    for i in range(n):
        yield cirq.CSWAP(ctl, down[i], aux_reg[i])

    inv_a = _modinv(a, N)

    yield from _qft(aux_reg, with_swaps=False)

    for i in reversed(range(n)):
        coeff = (pow(2, i, N) * inv_a) % N
        if coeff == 0:
            continue
        yield from _ccphiADDmodN_inv(aux_reg, down[i], ctl, aux_flag, coeff, N, n_bits_for_q=len(aux_reg))

    yield from _iqft(aux_reg, with_swaps=False)


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    """Shor QPE Oracle in Cirq."""
    N: int
    a: int

    def _num_qubits_(self) -> int:
        n = math.ceil(math.log(self.N, 2))
        return 4 * n + 2

    def _decompose_(self, qubits: Iterable[cirq.Qid]):
        qubits = list(qubits)
        n = math.ceil(math.log(self.N, 2))

        up = qubits[0:2 * n]
        down = qubits[2 * n:3 * n]
        aux = qubits[3 * n:4 * n + 2]

        for i in range(2 * n):
            power = pow(self.a, (1 << i), self.N)
            for op in _cMULTmodN(ctl=up[i], down=down, aux=aux, a=power, N=self.N, n=n):
                yield op

    def _circuit_diagram_info_(self, args):
        n = math.ceil(math.log(self.N, 2))
        labels = [f"up[{i}]" for i in range(2 * n)] + [f"down[{i}]" for i in range(n)] + [f"aux[{i}]" for i in
                                                                                          range(n + 2)]
        labels[-1] = "aux_flag"
        return labels


def load_algorithm_module(N, a):
    """Dynamically load the algorithm module for given qubit count n."""
    file_path = f"external_files/shor/algorithm_circuit/shor_{N}_{a}.py"
    spec = importlib.util.spec_from_file_location(f"shor_N{N}_a{a}", file_path)
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


def generate_oracle_gate(N, a):
    """Generates a oracle gate for Shor."""
    return Oracle(N, a)


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


def check_model(algo_str, post_proc_str, N, a, num_trials=10, shots_per_trial=1):
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # 1. Check algorithm (circuit generation) syntax
    try:
        algo_env = {"cirq": cirq, "math": math}
        exec(algo_str, algo_env, algo_env)
        algorithm_fn = algo_env["algorithm"]
        oracle_gate = generate_oracle_gate(N, a)
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
        circuit_gt = load_algorithm_module(N, a).algorithm(generate_oracle_gate(N, a))
        try:
            postprocess_fn(circuit_gt.copy(), N, a)
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:
                    algo_env = {}
                    exec(algo_str, globals(), algo_env)
                    algorithm_fn = algo_env["algorithm"]
                    oracle_gate = generate_oracle_gate(N, a)
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
        oracle_gate = generate_oracle_gate(N, a)

        try:
            # Model circuit
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            predictions = [
                postprocess_fn(circuit_model, N, a) for _ in range(shots_per_trial)
            ]

            model_times.append(time.time() - start)

            valids = [p for p in predictions if p is not None]
            if valids:
                total_correct += sum(p[0] * p[1] == N for p in valids)

            # Ground truth circuit (just for timing)
            circuit_gt = load_algorithm_module(N, a).algorithm(oracle_gate)
            start = time.time()
            prediction_gt = [
                ground_truth_run_and_analyze(circuit_gt.copy(), N, a) for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - start)

            valids = [p for p in prediction_gt if p is not None]
            if valids:
                if not any(factors[0] * factors[1] == N for factors in prediction_gt):
                    print(
                        f"[✗] Ground truth prediction mismatch: {prediction_gt} correct for N={N} and a={a}."
                    )
            break

        except Exception as e:
            print(f"[✗] Runtime error during trial (N={N}, a={a}):",
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
        eval_globals["N"] = N
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
        load_algorithm_module(N, a).algorithm(generate_oracle_gate(N, a))
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
    s = 'factor the integer $N$ with given $a$'
    has_description = s in prompt
    if has_description:
        N = int(prompt.split("$N = ")[1].split("$")[0])
        a = int(prompt.split("$a = ")[1].split("$")[0])
        n = int(prompt.split("should have $n = ")[1].split("$")[0])
        return has_description, {"N": N, "a": a}
    else:
        return has_description, {}
