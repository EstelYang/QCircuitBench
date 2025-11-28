import importlib.util
import time
import random
import cirq
import numpy as np


def _load_gt_module(n: int):
    """Load ./algorithm_circuit/diffusion_n{n}.py -> diffuser_circuit()."""
    fp = f"external_files/diffusion_operator/algorithm_circuit/diffusion_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"diffusion_n{n}", fp)
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


def _prepare_x_state(n: int, x_bits: str) -> cirq.Circuit:
    qubits = cirq.LineQubit.range(n)
    c = cirq.Circuit()
    for i, b in enumerate(x_bits):
        if b == "1":
            c.append(cirq.X(qubits[i]))
    return c


def _final_state_after_diffuser(diffuser: cirq.Circuit, n: int, x_bits: str):
    """Return statevector after preparing |x> and applying diffuser."""
    qubits = cirq.LineQubit.range(n)
    prep = _prepare_x_state(n, x_bits)
    test_circuit = cirq.Circuit()
    test_circuit += prep
    test_circuit += diffuser
    sim = cirq.Simulator()
    return sim.simulate(test_circuit).final_state_vector


def _global_phase_invariant_equal(psi: np.ndarray, phi: np.ndarray, atol=1e-6) -> bool:
    """Check |<psi|phi>| ≈ 1 within tolerance (global phase invariant)."""
    # Normalize (defensive)
    npsi = psi / np.linalg.norm(psi) if np.linalg.norm(psi) != 0 else psi
    nphi = phi / np.linalg.norm(phi) if np.linalg.norm(phi) != 0 else phi
    overlap = np.vdot(npsi, nphi)  # <psi|phi>
    return np.isclose(abs(overlap), 1.0, atol=atol)


def check_model(code_string: str, n: int, test_num: int = 20):
    """Verify a candidate diffuser string against ground truth.

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

    # Load ground-truth diffuser
    gt_module = _load_gt_module(n)
    diffuser_truth = gt_module.diffuser_circuit()

    # Load candidate diffuser from code string
    try:
        env = {}
        exec(code_string, env, env)
        diffuser_fn = env["diffuser_circuit"]
        code_syntax = 1
        print("[✓] Code loaded (diffuser_circuit found).")
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

    # Circuit sanity: simulate (no measurements required)
    try:
        diffuser_model = diffuser_fn()
        cirq.Simulator().simulate(diffuser_model)
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

    # Trials
    xs = _generate_random_x_strings(n, test_num=test_num)
    correct = 0
    model_time = 0.0
    truth_time = 0.0

    for x_bits in xs:
        t0 = time.time()
        state_model = _final_state_after_diffuser(diffuser_model, n, x_bits)
        model_time += time.time() - t0

        t0 = time.time()
        state_truth = _final_state_after_diffuser(diffuser_truth, n, x_bits)
        truth_time += time.time() - t0

        if _global_phase_invariant_equal(state_model, state_truth, atol=1e-6):
            correct += 1

    # Percentage of correct samples
    result_score = (correct / len(xs)) if xs else 0.0

    # Ratios: model / ground_truth
    try:
        gc_m = _gate_count(diffuser_model)
        gc_t = _gate_count(diffuser_truth)
        gate_count_ratio = (gc_m / gc_t) if gc_t else float("inf")
    except Exception:
        gate_count_ratio = float("nan")

    try:
        avg_model = model_time / len(xs) if xs else float("nan")
        avg_truth = truth_time / len(xs) if xs else float("nan")
        time_ratio = (
            (avg_model / avg_truth)
            if (avg_truth and avg_truth == avg_truth)
            else float("nan")
        )
    except Exception:
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
    s = "The diffusion operator"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, None
