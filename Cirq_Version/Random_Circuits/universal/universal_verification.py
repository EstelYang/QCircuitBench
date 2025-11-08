import time
import cirq
import numpy as np
import re
import textwrap


def simulate_statevector(sim: cirq.Simulator, circuit: cirq.Circuit) -> np.ndarray:
    """Return final statevector as complex numpy array."""
    result = sim.simulate(circuit)
    return np.asarray(result.final_state_vector, dtype=complex)


def state_fidelity(psi: np.ndarray, phi: np.ndarray) -> float:
    """F(|psi>, |phi>) = |<psi|phi>|^2 with safe normalization."""

    def _norm(v):
        n = np.linalg.norm(v)
        return v if n == 0 else v / n

    psi = _norm(psi.astype(complex))
    phi = _norm(phi.astype(complex))
    return float(np.abs(np.vdot(psi, phi)) ** 2)


def measure_gate_count(circuit: cirq.Circuit) -> int:
    """Count non-measurement gates in a Cirq circuit."""
    count = 0
    for moment in circuit:
        for op in moment.operations:
            g = getattr(op, "gate", None)
            if isinstance(g, cirq.Gate) and not isinstance(g, cirq.MeasurementGate):
                count += 1
    return count


def _strip_measurements(circuit: cirq.Circuit) -> cirq.Circuit:
    """Return a copy of circuit without measurement operations."""
    clean_moments = []
    for moment in circuit:
        ops = [op for op in moment if not cirq.is_measurement(op)]
        if ops:
            clean_moments.append(cirq.Moment(ops))
    return cirq.Circuit(clean_moments)


def _extract_python(code: str) -> str:
    """Extract Python source from a possibly fenced snippet."""
    if not code:
        raise ValueError("Empty code snippet.")
    snippet = code.strip()
    match = re.search(r"```(?:[a-zA-Z0-9_+-]*)?\s*([\s\S]*?)```", snippet)
    if match:
        snippet = match.group(1)
    elif snippet.startswith("cirq```"):
        snippet = snippet[len("cirq```"):]
    return textwrap.dedent(snippet).strip()


def _circuit_from_string(
        code: str, params: dict, fn_name: str = "algorithm"
) -> cirq.Circuit:
    """Execute code string and return constructed circuit from fn_name()."""
    source = _extract_python(code)
    env = {"cirq": cirq, "np": np, "numpy": np}
    env.update(params)
    exec(source, env, env)
    factory = env.get(fn_name)
    if factory is None or not callable(factory):
        raise KeyError(f"{fn_name}() not found in provided code.")
    circuit = factory()
    if not isinstance(circuit, cirq.Circuit):
        raise TypeError(f"{fn_name}() must return a cirq.Circuit.")
    return circuit


def check_model(
        algo_str: str,
        ground_truth_string: str,
        **params,
):
    """
    Verify a submitted universal circuit generator.

    Returns:
      (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)
        circuit_syntax: 1 if model circuit could be built & simulated, else 0
        code_syntax:    always 1 (verification infrastructure ran)
        result_score:   state fidelity(model, reference) in [0,1]
        gate_count_ratio: gate_count(model) / gate_count(reference)
        shot_ratio:     always 1 (shots not used here)
        time_ratio:     avg simulate time(model) / avg simulate time(reference)
    """

    circuit_syntax = -1
    print(
        "Random Circuit Synthesis tasks don't need model to write post-processing. So here code_syntax = nan (N/A) is correct.")
    code_syntax = float("nan")
    result_score = 0.0
    gate_count_ratio = float("nan")
    print("Random Circuit Synthesis tasks don't need shots. So here nan (N/A) is correct.")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    try:
        model_circuit = _circuit_from_string(algo_str, params, fn_name="algorithm")
    except Exception as exc:
        print(f"[✗] Failed to build model circuit: {exc}")
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    circuit_syntax = 1

    try:
        ref_circuit = _circuit_from_string(
            ground_truth_string, params, fn_name="algorithm"
        )
    except Exception as exc:
        print(f"[✗] Failed to build reference circuit: {exc}")
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    try:
        sim = cirq.Simulator()
        model_clean = _strip_measurements(model_circuit)
        ref_clean = _strip_measurements(ref_circuit)

        sv_model = simulate_statevector(sim, model_clean)
        sv_ref = simulate_statevector(sim, ref_clean)
        result_score = state_fidelity(sv_model, sv_ref)

        gc_model = measure_gate_count(model_circuit)
        gc_ref = measure_gate_count(ref_circuit)
        gate_count_ratio = (gc_model / gc_ref) if gc_ref != 0 else float("nan")

        num_trials = max(int(params.get("num_trials", 5)), 1)
        model_times = []
        ref_times = []
        for _ in range(num_trials):
            t0 = time.perf_counter()
            _ = simulate_statevector(sim, model_clean)
            model_times.append(time.perf_counter() - t0)

            t0 = time.perf_counter()
            _ = simulate_statevector(sim, ref_clean)
            ref_times.append(time.perf_counter() - t0)

        avg_time_model = (
            sum(model_times) / len(model_times) if model_times else float("nan")
        )
        avg_time_ref = sum(ref_times) / len(ref_times) if ref_times else float("nan")
        time_ratio = (
            (avg_time_model / avg_time_ref)
            if (avg_time_ref and avg_time_ref > 0)
            else float("nan")
        )
    except Exception as exc:
        print("[✗] Runtime error during verification:", exc)
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


def check_description(prompt):
    s = "be implemented with the approximately universal gate set"
    if s in prompt:
        pattern = r"target state \$\\ket\{{1,2}\\psi\}{1,2} = \$\s*(.*?)(?=\. Please)"
        match = re.search(pattern, prompt, re.DOTALL)
        if match:
            target_state = match.group(1).strip()
            return s in prompt, {"target_state": target_state}
        else:
            raise ValueError("Target state not found in the prompt.")
    else:
        return False, None
