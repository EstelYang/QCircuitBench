import importlib.util
import time
import random
import numpy as np
import cirq


def _load_oracle_module(n: int, m: str):
    """Load ./algorithm_circuit/grover_oracle_n{n}_m{m}.py which defines oracle_circuit()."""
    fp = f"./algorithm_circuit/grover_oracle_n{n}_m{m}.py"
    spec = importlib.util.spec_from_file_location(f"grover_oracle_n{n}_m{m}", fp)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def _gate_count(circuit: cirq.Circuit) -> int:
    return sum(
        1
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
        and not isinstance(op.gate, cirq.MeasurementGate)
    )


def _rand_inputs(n: int, test_num: int = 20):
    k = min(2 ** (n - 2), test_num)
    s = set()
    while len(s) < k:
        s.add("".join(random.choice("01") for _ in range(n)))
    return [*s]


def _goal_state(n: int, marked: str, x: str):
    """Return target statevector for the oracle acting on |x>:

    |x> -> -|x> if x==marked else |x>
    """
    goal = np.zeros(2 ** n, dtype=complex)
    idx = int(x, 2)
    phase = -1.0 if x == marked else 1.0
    goal[idx] = phase
    return goal


def _simulate_state_after_oracle(oracle_circuit: cirq.Circuit, n: int, x_bits: str):
    """Prepare |x>, apply oracle, return final statevector (numpy)."""
    qs = [cirq.LineQubit(i) for i in range(n)]
    prep = cirq.Circuit()
    for i, b in enumerate(x_bits):
        if b == "1":
            prep.append(cirq.X(qs[i]))

    test = cirq.Circuit()
    test += prep
    test += oracle_circuit

    sim = cirq.Simulator()
    final = sim.simulate(test).final_state_vector
    return np.asarray(final, dtype=complex)


def _equiv_up_to_global(a: np.ndarray, b: np.ndarray, atol=1e-8):
    """Check vector equivalence up to a global phase."""
    # Find an index with nonzero magnitude
    idx = None
    for i in range(a.size):
        if abs(a[i]) > atol or abs(b[i]) > atol:
            idx = i
            break
    if idx is None:
        return True  # both near zero vectors (shouldn't happen here)
    # global phase that maps b[idx] to a[idx]
    if abs(b[idx]) < atol:
        return np.allclose(a, b, atol=atol)
    phase = a[idx] / b[idx]
    return np.allclose(a, phase * b, atol=atol)


def check_model(code_string: str, n: int, marked_str: str, test_num: int = 20):
    """Verify Grover oracle implementation in `code_string`.

    Returns:
      (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)

    - result_score: percentage of correct samples over `test_num` inputs (∈ [0,1]).
    - shot_ratio: always 1.0 (no sampling used).
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

    # Load candidate oracle_circuit()
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

    # Build circuits and sanity-simulate (no measurement → use simulate)
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

    # Ground truth from generated files
    circuit_truth = _load_oracle_module(n, marked_str).oracle_circuit()

    # Evaluate correctness over inputs (include marked first, then randoms)
    inputs = _rand_inputs(n, test_num=max(1, test_num - 1))
    if marked_str not in inputs:
        inputs = [marked_str] + inputs

    sim = cirq.Simulator()
    correct = 0
    t_model = 0.0
    t_truth = 0.0

    for x in inputs:
        # Model
        t0 = time.time()
        state_m = _simulate_state_after_oracle(circuit_model, n, x)
        t_model += time.time() - t0

        # Truth
        t0 = time.time()
        state_t = _simulate_state_after_oracle(circuit_truth, n, x)
        t_truth += time.time() - t0

        # Goal (phase-flipped basis state)
        goal = _goal_state(n, marked_str, x)

        ok_m = _equiv_up_to_global(state_m, goal)
        ok_t = _equiv_up_to_global(state_t, goal)

        if not ok_t:
            print(f"[!] Ground truth mismatch for x={x} (n={n}, m={marked_str})")

        correct += int(ok_m)

    # Metrics
    total = len(inputs)
    result_score = correct / total if total else 0.0

    try:
        gc_m = _gate_count(circuit_model)
        gc_t = _gate_count(circuit_truth)
        gate_count_ratio = (gc_m / gc_t) if gc_t else float("inf")
    except Exception as e:
        print("[!] Gate count error:", e)
        gate_count_ratio = float("nan")

    try:
        avg_m = t_model / total if total else float("nan")
        avg_t = t_truth / total if total else float("nan")
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
    s = "the function returns $1$ for a unique marked item $w$"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        marked_str = prompt.split("$w = ")[1].split("$")[0]
        return s in prompt, {"n": n, "marked_str": marked_str}
    else:
        return False, None
