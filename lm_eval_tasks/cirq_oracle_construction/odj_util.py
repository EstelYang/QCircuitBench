import importlib.util
import time
import random
import numpy as np
import cirq


def _load_dj_module(n: int, balance_type: str, key_str: str):
    """
    balance_type ∈ {"constant","balanced"}
    key_str = "0" or "1" for constant; n-bit string for balanced
    """
    if balance_type == "constant":
        fp = f"external_files/deutsch_jozsa/algorithm_circuit/dj_oracle_n{n}_constant_{key_str}.py"
        name = f"dj_oracle_n{n}_constant_{key_str}"
    elif balance_type == "balanced":
        fp = f"external_files/deutsch_jozsa/algorithm_circuit/dj_oracle_n{n}_balanced_{key_str}.py"
        name = f"dj_oracle_n{n}_balanced_{key_str}"
    else:
        raise ValueError("balance_type must be 'constant' or 'balanced'.")

    spec = importlib.util.spec_from_file_location(name, fp)
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


def _generate_random_x_strings(n: int, test_num: int = 20):
    k = min(2 ** (n - 2), test_num)
    seen = set()
    while len(seen) < k:
        seen.add("".join(random.choice("01") for _ in range(n)))
    return list(seen)


def _simulate_one(
        oracle_circuit: cirq.Circuit, n: int, x_bits: str, repetitions: int = 10
):
    """
    Prepare |x> on data qubits, apply oracle, measure target; return counts.
    """
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
        code_string: str,
        n: int,
        balance_type: str,
        key_str: str,
        test_num: int = 20,
        repetitions: int = 10,
):
    """
    Verify a submitted DJ oracle implementation (as a Python string that defines oracle_circuit()).

    Returns tuple:
      (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)

    Conventions:
      - shot_ratio = 1 (by definition)
      - ratios are model / ground_truth
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

    # Load submitted oracle_circuit()
    try:
        env = {}
        exec(code_string, env, env)
        oracle_fn = env["oracle_circuit"]
        print("[✓] Code loaded.")
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

    # Build/simulate sanity (use state sim; no measurements in the bare oracle)
    try:
        circuit_model = oracle_fn()
        cirq.Simulator().simulate(circuit_model)
        circuit_syntax = 1
        print("[✓] Circuit builds & simulates.")
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

    # Ground truth
    gt_module = _load_dj_module(n, balance_type, key_str)
    circuit_truth = gt_module.oracle_circuit()

    # Functional tests across random inputs
    xs = _generate_random_x_strings(n, test_num=test_num)

    def expected(balance_type: str, key_str: str, x_bits: str) -> int:
        if balance_type == "constant":
            return int(key_str)  # always 0 or 1
        # balanced: f(x) = parity of (x AND key)
        x = np.fromiter((int(b) for b in x_bits), dtype=int)
        k = np.fromiter((int(b) for b in key_str), dtype=int)
        return int((x @ k) % 2)

    model_time_acc = 0.0
    truth_time_acc = 0.0
    correct = 0  # count correct samples

    for x_bits in xs:
        t0 = time.time()
        counts_m = _simulate_one(circuit_model, n, x_bits, repetitions=repetitions)
        model_time_acc += time.time() - t0

        t0 = time.time()
        counts_t = _simulate_one(circuit_truth, n, x_bits, repetitions=repetitions)
        truth_time_acc += time.time() - t0

        exp = expected(balance_type, key_str, x_bits)
        ok_t = (counts_t[str(exp)] == repetitions) and (counts_t[str(1 - exp)] == 0)
        if not ok_t:
            print(
                f"[!] Ground-truth mismatch for x={x_bits}, expected={exp}, counts={counts_t}"
            )
            # continue evaluating, but this indicates GT inconsistency
        ok_m = (counts_m[str(exp)] == repetitions) and (counts_m[str(1 - exp)] == 0)
        if ok_m:
            correct += 1
        else:
            print(
                f"[✗] Model mismatch for x={x_bits}, expected={exp}, counts={counts_m}"
            )

    # Percentage of correct samples
    result_score = correct / len(xs) if xs else 0.0

    # Ratios (model / ground_truth)
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
    s = "the oracle $O_f$ encodes the function $f(x)$ and operates as $O_f "
    if s in prompt:
        if "constant with" in prompt:
            balance = "constant"
            key_str = prompt.split("with $f(x)$ returns $")[0][:1]
        else:
            balance = "balanced"
            key_str = prompt.split("$b = ")[1].split("$")[0]
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {'n': n, 'balance_type': balance, 'key_str': key_str}
    else:
        return False, None
