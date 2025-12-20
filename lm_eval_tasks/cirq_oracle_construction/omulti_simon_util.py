import importlib.util
import time
import random
import numpy as np
import cirq


def _load_oracle_module(n: int, s1: str, s2: str, key: str):
    fp = f"external_files/generalized_simon_multi/algorithm_circuit/multi_simon_oracle_n{n}_s(1){s1}_s(2){s2}_k{key}.py"
    spec = importlib.util.spec_from_file_location(
        f"multi_simon_oracle_n{n}_s(1){s1}_s(2){s2}_k{key}", fp
    )
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def _gate_count(c: cirq.Circuit) -> int:
    return sum(
        1
        for m in c
        for op in m.operations
        if isinstance(op.gate, cirq.Gate) and not isinstance(op.gate, cirq.MeasurementGate)
    )


def generate_random_strings(n: int, test_num: int = 20):
    k = min(2 ** (n - 2), test_num)
    seen = set()
    while len(seen) < k:
        seen.add("".join(random.choice("01") for _ in range(n)))
    return list(seen)


def _simulate_one_xy(
        oracle_circuit: cirq.Circuit,
        n: int,
        x_bits: str,
        repetitions: int = 10,
):
    qubits = [cirq.LineQubit(i) for i in range(2 * n + 1)]
    x_reg = qubits[:n]
    y_reg = qubits[n: 2 * n]
    anc = qubits[2 * n]

    reversed_x = x_bits[::-1]
    prep_input = cirq.Circuit()
    for i, b in enumerate(reversed_x):
        if b == "1":
            prep_input.append(cirq.X(x_reg[i]))

    test_circuit = cirq.Circuit()
    test_circuit += prep_input
    test_circuit += oracle_circuit

    test_circuit.append(cirq.measure(*y_reg, key="y"))

    sim = cirq.Simulator()
    res = sim.run(test_circuit, repetitions=repetitions)
    rows = res.measurements["y"]  # shape: (shots, n)
    strings = ["".join(str(int(bit)) for bit in row) for row in rows]
    counts = {}
    for s in strings:
        counts[s] = counts.get(s, 0) + 1
    return counts


def check_model(
        code_string: str,
        n: int,
        s1: str,
        s2: str,
        key_str: str,
        test_num: int = 20,
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
        print("[✓] Circuit loaded.")
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

    circuit_truth = _load_oracle_module(n, s1, s2, key_str).oracle_circuit()

    input_states = generate_random_strings(n, test_num=test_num)
    model_time_acc = 0.0
    truth_time_acc = 0.0
    correct = 0

    def _expected_y(
            x_bits: str,
            s_bits: str,
            k_bits: str,
            *,
            control_on_zero: bool = False,
            pivot: str = "least1",
    ) -> str:

        def to_arr(bits: str) -> np.ndarray:
            a = np.fromiter((ord(b) - 48 for b in bits), dtype=np.int8, count=len(bits))
            return a

        def to_bits(a: np.ndarray) -> str:
            return "".join("1" if v else "0" for v in a.tolist())

        x = to_arr(x_bits[::-1])
        s = to_arr(s_bits[::-1])
        k = to_arr(k_bits[::-1])
        y = x.copy()

        if s.any():
            idxs = np.flatnonzero(s)
            j = int(idxs[0] if pivot == "least1" else idxs[-1])
            xj = int(x[j])
            if control_on_zero:
                mask = (1 - xj) * s
            else:
                mask = xj * s
            y = (y ^ mask)

        y = (y ^ k)
        return to_bits(y)

    def expected_pair(
            x_str: str,
            s1_str: str,
            s2_str: str,
            key_str: str,
            **opts
    ):
        y1 = _expected_y(x_str, s1_str, key_str, **opts)
        y2 = _expected_y(x_str, s2_str, key_str, **opts)
        return y1, y2

    for x_bits in input_states:
        # Model
        t0 = time.time()
        counts_m = _simulate_one_xy(circuit_model, n, x_bits, repetitions=repetitions)
        model_time_acc += time.time() - t0

        # Truth
        t0 = time.time()
        counts_t = _simulate_one_xy(circuit_truth, n, x_bits, repetitions=repetitions)
        truth_time_acc += time.time() - t0

        y1, y2 = expected_pair(x_bits, s1, s2, key_str)

        ok_m = (len(counts_m) == 1) and (y1 in counts_m or y2 in counts_m) and (
                list(counts_m.values())[0] == repetitions)
        ok_t = (len(counts_t) == 1) and (y1 in counts_t or y2 in counts_t) and (
                list(counts_t.values())[0] == repetitions)

        if not ok_t:
            print(f"[!] Ground-truth mismatch x={x_bits}, expected={y1}/{y2}, counts={counts_t}")

        if not ok_m:
            print(f"[✗] Model mismatch x={x_bits}, expected={y1}/{y2}, counts={counts_m}")
        else:
            correct += 1

    result_score = (correct / len(input_states)) if input_states else 0.0

    try:
        gate_count_model = _gate_count(circuit_model)
        gate_count_truth = _gate_count(circuit_truth)
        gate_count_ratio = gate_count_model / gate_count_truth if gate_count_truth else float("inf")
    except Exception as e:
        print("[!] Gate count error:", e)
        gate_count_ratio = float("nan")

    try:
        avg_model_time = model_time_acc / len(input_states) if input_states else float("nan")
        avg_truth_time = truth_time_acc / len(input_states) if input_states else float("nan")
        time_ratio = (avg_model_time / avg_truth_time) if (
                avg_truth_time == avg_truth_time and avg_truth_time != 0.0) else float("nan")
    except Exception as e:
        print("[!] Time ratio error:", e)
        time_ratio = float("nan")

    return (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)


def check_description(prompt):
    s = "secret strings $s_1"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        s1 = prompt.split("$s_1 = ")[1].split("$")[0]
        s2 = prompt.split("$s_2 = ")[1].split("$")[0]
        key_str = prompt.split("$b = ")[1].split("$")[0]
        return s in prompt, {"n": n, "s1": s1, "s2": s2, "key_str": key_str}
    else:
        return False, None
