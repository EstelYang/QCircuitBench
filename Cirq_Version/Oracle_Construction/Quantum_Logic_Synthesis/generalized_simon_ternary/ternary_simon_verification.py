import time
import math
import random
import cirq


def _generate_ternary_numbers(n: int):
    if n == 0:
        return [""]
    smaller = _generate_ternary_numbers(n - 1)
    return [x + y for x in smaller for y in "012"]


def _add_ternary(t1: str, t2: str) -> str:
    return ''.join(str((int(t1[i]) + int(t2[i])) % 3) for i in range(len(t1)))


def find_ternary_cycles(n: int, s: str):
    nums = _generate_ternary_numbers(n)
    cycles, seen = [], set()
    for v in nums:
        if v not in seen:
            cur = v
            cyc = []
            while cur not in seen:
                seen.add(cur)
                cyc.append(cur)
                cur = _add_ternary(cur, s)
            cycles.append(cyc)
    return cycles


def ternary_to_qubits(ternary_str: str):
    out = []
    for d in ternary_str:
        if d == '0':
            out.append((0, 0))
        elif d == '1':
            out.append((0, 1))
        elif d == '2':
            out.append((1, 0))
        else:
            raise ValueError(f"bad ternary digit {d}")
    return out


def _truth_oracle_cirq(n: int, secret: str) -> cirq.Circuit:
    cycles = find_ternary_cycles(n, secret)
    m = max(1, math.ceil(math.log2(len(cycles))))
    q = cirq.LineQubit.range(2 * n + m)
    x = q[:2 * n]
    y = q[2 * n:2 * n + m]
    circuit = cirq.Circuit()

    def enc_digit(d: str) -> str:
        return '00' if d == '0' else '01' if d == '1' else '10'

    for cidx, cyc in enumerate(cycles):
        bin_idx = format(cidx, f'0{m}b')
        for k, bit in enumerate(bin_idx):
            if bit != '1':
                continue
            for v in cyc:
                patt = ''.join(enc_digit(d) for d in v)
                controls = []
                cvals = []
                for i, ch in enumerate(patt):
                    controls.append(x[i])
                    cvals.append(1 if ch == '1' else 0)
                op = cirq.X(y[k]).controlled_by(*controls, control_values=tuple(cvals))
                circuit.append(op)
    return circuit


def _gate_count(c: cirq.Circuit) -> int:
    return sum(
        1
        for m in c
        for op in m.operations
        if isinstance(op.gate, cirq.Gate) and not isinstance(op.gate, cirq.MeasurementGate)
    )


def _simulate_one_input(
        oracle_circuit: cirq.Circuit,
        n: int,
        ternary_str: str,
        repetitions: int = 10,
):
    cycles = find_ternary_cycles(n, "0" * n)
    total_qubits = len(list(oracle_circuit.all_qubits()))
    m = total_qubits - 2 * n

    q = [cirq.LineQubit(i) for i in range(2 * n + m)]
    xreg = q[:2 * n]
    yreg = q[2 * n:2 * n + m]

    prep = cirq.Circuit()
    pairs = ternary_to_qubits(ternary_str)
    for i, (q1, q0) in enumerate(pairs):
        if q1 == 1:
            prep.append(cirq.X(xreg[2 * i]))
        if q0 == 1:
            prep.append(cirq.X(xreg[2 * i + 1]))

    test_circuit = cirq.Circuit()
    test_circuit += prep
    test_circuit += oracle_circuit
    test_circuit.append(cirq.measure(*yreg, key="y"))

    sim = cirq.Simulator()
    res = sim.run(test_circuit, repetitions=repetitions)
    rows = res.measurements["y"]  # shape: (shots, m)
    strings = ["".join(str(int(bit)) for bit in row) for row in rows]
    counts = {}
    for s in strings:
        counts[s] = counts.get(s, 0) + 1
    return counts


def check_model(
        code_string: str,
        n: int,
        secret_string: str,
        key_string: str,
        test_num: int = 10,
        repetitions: int = 10,
):
    circuit_syntax = -1
    print(
        "Oracle Construction tasks don't need model to write post-processing. So here code_syntax = nan (N/A) is correct.")
    code_syntax = float("nan")
    result_score = 0.0
    gate_count_ratio = float("nan")
    print("Oracle Construction tasks don't need shots. So here nan (N/A) is correct.")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    try:
        env = {}
        exec(code_string, env, env)
        oracle_fn = env["oracle_circuit"]
    except Exception as e:
        print("[✗] Circuit syntax error:", e)
        return (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)

    try:
        circuit_model = oracle_fn()
        cirq.Simulator().simulate(circuit_model)
        circuit_syntax = 1
        print("[✓] Circuit builds and simulates.")
    except Exception as e:
        print("[✗] Circuit build/sim error:", e)
        return (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)

    circuit_truth = _truth_oracle_cirq(n, secret_string)

    cycles = find_ternary_cycles(n, secret_string)
    m = max(1, math.ceil(math.log2(len(cycles))))
    total_cases = 0
    correct = 0
    model_time_acc = 0.0
    truth_time_acc = 0.0

    sample_num = min(test_num, len(cycles))
    sample_indices = random.sample(range(len(cycles)), sample_num)

    for cidx in sample_indices:
        cyc = cycles[cidx]
        expected_bits = format(cidx, f'0{m}b')

        for tstr in cyc:
            total_cases += 1

            # Model
            t0 = time.time()
            counts_m = _simulate_one_input(circuit_model, n, tstr, repetitions=repetitions)
            model_time_acc += time.time() - t0

            # Truth
            t0 = time.time()
            counts_t = _simulate_one_input(circuit_truth, n, tstr, repetitions=repetitions)
            truth_time_acc += time.time() - t0

            ok_m = (len(counts_m) == 1) and (expected_bits in counts_m) and (list(counts_m.values())[0] == repetitions)
            ok_t = (len(counts_t) == 1) and (expected_bits in counts_t) and (list(counts_t.values())[0] == repetitions)

            if not ok_t:
                print(f"[!] Ground-truth mismatch input={tstr}, expected={expected_bits}, counts={counts_t}")
            if not ok_m:
                print(f"[✗] Model mismatch input={tstr}, expected={expected_bits}, counts={counts_m}")
            else:
                correct += 1

    result_score = (correct / total_cases) if total_cases else 0.0

    try:
        gate_count_model = _gate_count(circuit_model)
        gate_count_truth = _gate_count(circuit_truth)
        gate_count_ratio = gate_count_model / gate_count_truth if gate_count_truth else float("inf")
    except Exception as e:
        print("[!] Gate count error:", e)
        gate_count_ratio = float("nan")

    try:
        avg_model_time = model_time_acc / total_cases if total_cases else float("nan")
        avg_truth_time = truth_time_acc / total_cases if total_cases else float("nan")
        time_ratio = (avg_model_time / avg_truth_time) if (
                avg_truth_time == avg_truth_time and avg_truth_time != 0.0) else float("nan")
    except Exception as e:
        print("[!] Time ratio error:", e)
        time_ratio = float("nan")

    return (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)


def check_description(prompt):
    s = "maps triples of inputs $x_1$, $x_2$, and $x_3$"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        s = prompt.split("$s = ")[1].split("$")[0]
        key_str = prompt.split("$b = ")[1].split("$")[0]
        return s in prompt, {"n": n, "secret_string": s, "key_string": key_str}
    else:
        return False, None
