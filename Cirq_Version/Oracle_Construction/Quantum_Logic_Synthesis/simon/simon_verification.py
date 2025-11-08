import importlib.util
import time
import random
import cirq
import numpy as np


def _load_truth_module(n: int, s: str, k: str):
    """Load ./algorithm_circuit/simon_n{n}_s{s}_k{k}.py"""
    fp = f"./algorithm_circuit/simon_n{n}_s{s}_k{k}.py"
    spec = importlib.util.spec_from_file_location(f"simon_n{n}_s{s}_k{k}", fp)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def _gate_count(c: cirq.Circuit) -> int:
    return sum(
        1
        for m in c
        for op in m.operations
        if isinstance(op.gate, cirq.Gate)
        and not isinstance(op.gate, cirq.MeasurementGate)
    )


def _rand_bits(n: int) -> str:
    return "".join(random.choice("01") for _ in range(n))


def _x_samples(n: int, test_num: int = 20):
    need = min(2 ** (n - 2), test_num)
    out, seen = [], set()
    while len(out) < need:
        s = _rand_bits(n)
        if s not in seen:
            seen.add(s)
            out.append(s)
    return out


def _expected_y(x_bits: str, s_bits: str, k_bits: str) -> str:
    """
    Matches the circuit construction:
      y = x
      if s != 0^n: let j = first index with s[j]==1; then for every t with s[t]==1, y_t ^= x_j
      y ^= k
    """
    x = np.array([int(b) for b in x_bits], dtype=int)
    s = np.array([int(b) for b in s_bits], dtype=int)
    k = np.array([int(b) for b in k_bits], dtype=int)
    y = x.copy()
    if s.any():
        j = int(np.argmax(s))  # first index with 1
        y = (y + (x[j] * s)) % 2
    y = (y + k) % 2
    return "".join(str(int(b)) for b in y)


def _simulate_f_x(
        n: int, oracle_circuit: cirq.Circuit, x_bits: str, repetitions: int = 1
) -> str:
    """
    Prepare |x> on first n, |0^n> on last n; apply oracle; measure last n as a single bitstring.
    Returns the first measured string (deterministic oracle ⇒ 1 shot is fine).
    """
    qubits = cirq.LineQubit.range(2 * n)
    q_in = qubits[:n]
    q_out = qubits[n:]
    prep = cirq.Circuit()
    for i, b in enumerate(x_bits):
        if b == "1":
            prep.append(cirq.X(q_in[i]))
    meas = cirq.Circuit(cirq.measure(*q_out, key="y"))
    sim = cirq.Simulator()
    result = sim.run(prep + oracle_circuit + meas, repetitions=repetitions)
    # Grab the first shot as a bitstring y_{n-1}...y_0 in little-endian order from Cirq array
    arr = result.measurements["y"][0]  # shape: (n,)
    # Cirq packs least-significant bit at position 0 for measure(*, key)
    # We want y0..y{n-1} with index order 0..n-1, so flip to match construction order.
    # Since we measured *q_out in ascending index order*, arr[0] corresponds to q_out[0] (i.e., y0).
    y_bits = "".join(str(int(b)) for b in arr)
    return y_bits


def check_model(
        code_string: str,
        n: int,
        s_str: str,
        key_str: str,
        test_num: int = 20,
        repetitions: int = 1,
):
    """
    Verify candidate oracle `code_string` (must define oracle_circuit()) against ground truth files.

    Returns:
      (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)
    """
    circuit_syntax = -1
    print(
        "Oracle Construction tasks don't need model to write post-processing. So here code_syntax = nan (N/A) is correct.")
    code_syntax = float("nan")
    result_score = 0.0
    gate_count_ratio = float("nan")
    print("Oracle Construction tasks don't need shots. So here nan (N/A) is correct.")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # Load candidate oracle
    try:
        env = {}
        exec(code_string, env, env)
        oracle_fn = env["oracle_circuit"]
        code_syntax = 1
    except Exception as e:
        print("[✗] Code syntax error:", e)
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # Circuit builds/simulates (no measurements → simulate)
    try:
        circuit_model = oracle_fn()
        cirq.Simulator().simulate(circuit_model)
        circuit_syntax = 1
    except Exception as e:
        print("[✗] Circuit build/sim error:", e)
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # Ground-truth circuit (from generated files)
    truth_mod = _load_truth_module(n, s_str, key_str)
    circuit_truth = truth_mod.oracle_circuit()

    # Trials
    xs = _x_samples(n, test_num=test_num)
    correct = 0
    model_time = 0.0
    truth_time = 0.0

    for x in xs:
        exp_y = _expected_y(x, s_str, key_str)

        t0 = time.time()
        y_model = _simulate_f_x(n, circuit_model, x, repetitions=repetitions)
        model_time += time.time() - t0

        t0 = time.time()
        y_truth = _simulate_f_x(n, circuit_truth, x, repetitions=repetitions)
        truth_time += time.time() - t0

        if y_truth != exp_y:
            print(f"[!] Ground-truth mismatch: x={x}, expected={exp_y}, got={y_truth}")
        if y_model == exp_y:
            correct += 1
        else:
            print(f"[✗] Model mismatch: x={x}, expected={exp_y}, got={y_model}")

    result_score = correct / len(xs) if xs else 0.0

    # 5) Ratios (model / truth)
    try:
        gc_m = _gate_count(circuit_model)
        gc_t = _gate_count(circuit_truth)
        gate_count_ratio = gc_m / gc_t if gc_t else float("inf")
    except Exception as e:
        print("[!] Gate count error:", e)
        gate_count_ratio = float("nan")

    try:
        avg_m = model_time / len(xs) if xs else float("nan")
        avg_t = truth_time / len(xs) if xs else float("nan")
        time_ratio = (
            (avg_m / avg_t) if (avg_t == avg_t and avg_t != 0.0) else float("nan")
        )
    except Exception as e:
        print("[!] Time ratio error:", e)
        time_ratio = float("nan")

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


def check_description(prompt):
    s = "The oracle $O_f$ encodes the function $f:"
    s2 = "secret string $s"
    s3 = "consider the least index $j$ so that $s_j = 1$"
    if s in prompt and s2 in prompt and s3 in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        s_str = prompt.split("$s = ")[1].split("$")[0]
        key_str = prompt.split("$b = ")[1].split("$")[0]
        return True, {"n": n, "s_str": s_str, "key_str": key_str}
    else:
        return False, None
