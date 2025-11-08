import importlib.util
import time
import random
import numpy as np
import cirq


def _load_oracle_module(n: int, s: str):
    """Dynamically load ./algorithm_circuit/bv_oracle_n{n}_s{s}.py"""
    fp = f"./algorithm_circuit/bv_oracle_n{n}_s{s}.py"
    spec = importlib.util.spec_from_file_location(f"bv_oracle_n{n}_s{s}", fp)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def _gate_count(c: cirq.Circuit) -> int:
    """Non-measurement gate count."""
    return sum(
        1
        for m in c
        for op in m.operations
        if isinstance(op.gate, cirq.Gate)
        and not isinstance(op.gate, cirq.MeasurementGate)
    )


def _generate_random_x_strings(n: int, test_num: int = 20):
    """Like your Qiskit helper: min(2^(n-2), test_num) bitstrings of length n."""
    k = min(2 ** (n - 2), test_num)
    seen = set()
    while len(seen) < k:
        seen.add("".join(random.choice("01") for _ in range(n)))
    return list(seen)


def _simulate_one(
        oracle_circuit: cirq.Circuit, n: int, x_bits: str, repetitions: int = 10
):
    """Prepare |x> on data qubits, apply oracle, measure target; return counts."""
    qubits = [cirq.LineQubit(i) for i in range(n + 1)]
    target = qubits[-1]
    prep = cirq.Circuit()
    for i, b in enumerate(x_bits):
        if b == "1":
            prep.append(cirq.X(qubits[i]))
    test_circuit = cirq.Circuit()
    test_circuit += prep
    test_circuit += oracle_circuit
    test_circuit.append(cirq.measure(target, key="y"))

    sim = cirq.Simulator()
    res = sim.run(test_circuit, repetitions=repetitions)
    vals = res.measurements["y"].ravel()
    zeros = int((vals == 0).sum())
    ones = int((vals == 1).sum())
    return {"0": zeros, "1": ones}


def check_model(
        code_string: str, n: int, s_str: str, test_num: int = 20, repetitions: int = 10
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

    # Load oracle_circuit() from code_string
    try:
        env = {}
        exec(code_string, env, env)
        oracle_fn = env["oracle_circuit"]
        print("[✓] Circuit loaded.")
    except Exception as e:
        print("[✗] Circuit syntax error:", e)
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # Circuit build/simulate sanity check (no measurements → use simulate)
    try:
        circuit_model = oracle_fn()
        cirq.Simulator().simulate(circuit_model)
        circuit_syntax = 1
        print("[✓] Circuit builds and simulates.")
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

    # Ground-truth circuit for comparisons
    circuit_truth = _load_oracle_module(n, s_str).oracle_circuit()

    #Functional tests over random x
    xs = _generate_random_x_strings(n, test_num=test_num)

    def expected(x_bits: str) -> int:
        x = np.fromiter((int(b) for b in x_bits), dtype=int)
        s = np.fromiter((int(b) for b in s_str), dtype=int)
        return int((x @ s) % 2)

    model_time_acc = 0.0
    truth_time_acc = 0.0
    correct = 0  # count how many test inputs the model gets fully correct

    for x_bits in xs:
        # Model
        t0 = time.time()
        counts_m = _simulate_one(circuit_model, n, x_bits, repetitions=repetitions)
        model_time_acc += time.time() - t0

        # Truth
        t0 = time.time()
        counts_t = _simulate_one(circuit_truth, n, x_bits, repetitions=repetitions)
        truth_time_acc += time.time() - t0

        exp = expected(x_bits)  # 0 or 1
        ok_m = (counts_m[str(exp)] == repetitions) and (counts_m[str(1 - exp)] == 0)
        ok_t = (counts_t[str(exp)] == repetitions) and (counts_t[str(1 - exp)] == 0)

        if not ok_t:
            print(
                f"[!] Ground-truth mismatch for x={x_bits}, expected={exp}, counts={counts_t}"
            )
            # continue evaluating; do not early exit

        if not ok_m:
            print(
                f"[✗] Model mismatch for x={x_bits}, expected={exp}, counts={counts_m}"
            )
        else:
            correct += 1

    # Percentage of correct samples
    result_score = (correct / len(xs)) if xs else 0.0

    # Gate count & time ratios (model / ground-truth)
    try:
        gate_count_model = _gate_count(circuit_model)
        gate_count_truth = _gate_count(circuit_truth)
        gate_count_ratio = (
            gate_count_model / gate_count_truth if gate_count_truth else float("inf")
        )
    except Exception as e:
        print("[!] Gate count error:", e)
        gate_count_ratio = float("nan")

    try:
        avg_model_time = model_time_acc / len(xs) if xs else float("nan")
        avg_truth_time = truth_time_acc / len(xs) if xs else float("nan")
        time_ratio = (
            avg_model_time / avg_truth_time
            if (avg_truth_time == avg_truth_time and avg_truth_time != 0.0)
            else float("nan")
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
    s = "dot s$ is the bitwise dot product modulo $2$). The t"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        s_str = prompt.split("$s = ")[1].split("$")[0]
        return s in prompt, {"n": n, "s_str": s_str}
    else:
        return False, None
