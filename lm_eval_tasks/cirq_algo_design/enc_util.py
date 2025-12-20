import math
import numpy as np
import cirq


def _basis_baseline() -> cirq.Circuit:
    q = cirq.LineQubit.range(3)
    c = cirq.Circuit()
    c.append(cirq.X(q[0]))
    c.append(cirq.X(q[2]))
    c.append(cirq.H(q[1]))
    return c


def _amplitude_baseline() -> cirq.Circuit:
    q = cirq.LineQubit.range(2)
    a, b, c_, d = 1.5, 0.0, -2.0, 3.0
    norm = math.sqrt(a * a + b * b + c_ * c_ + d * d)
    a, b, c_, d = a / norm, b / norm, c_ / norm, d / norm

    p1 = c_ * c_ + d * d
    theta0 = 2 * math.asin(math.sqrt(p1))
    r0 = abs(c_) / math.sqrt(p1) if p1 > 0 else 1.0
    phi = 2 * math.acos(r0)

    ckt = cirq.Circuit()
    ckt.append(cirq.ry(theta0).on(q[0]))
    ckt.append(cirq.ry(phi).on(q[1]).controlled_by(q[0]))  # CRY
    ckt.append(cirq.X(q[1]))
    ckt.append(cirq.CZ(q[0], q[1]))
    ckt.append(cirq.X(q[1]))
    return ckt


def _angle_baseline() -> cirq.Circuit:
    q = cirq.LineQubit.range(3)
    c = cirq.Circuit()
    c.append(cirq.ry(0.0).on(q[0]))
    c.append(cirq.ry(math.pi / 2).on(q[1]))
    c.append(cirq.ry(math.pi).on(q[2]))
    return c


def _target_basis_state() -> np.ndarray:
    vec = np.zeros(8, dtype=complex)
    vec[5] = 1 / math.sqrt(2)
    vec[7] = 1 / math.sqrt(2)
    return vec


def _target_amplitude_state() -> np.ndarray:
    norm = math.sqrt(15.25)
    return np.array([1.5 / norm, 0.0, -2.0 / norm, 3.0 / norm], dtype=complex)


def _fidelity(psi: np.ndarray, phi: np.ndarray) -> float:
    """|<psi|phi>|^2"""
    return float(abs(np.vdot(psi, phi)) ** 2)


def _simulate_statevector(circuit: cirq.Circuit) -> np.ndarray:
    sim = cirq.Simulator()
    res = sim.simulate(circuit)
    return np.array(res.final_state_vector, dtype=complex, copy=True)


def _simulate_density_matrix(circuit: cirq.Circuit) -> np.ndarray:
    dsim = cirq.DensityMatrixSimulator()
    res = dsim.simulate(circuit)
    return np.array(res.final_density_matrix, dtype=complex, copy=True)


def _probs_from_vec(vec: np.ndarray) -> np.ndarray:
    return np.abs(vec) ** 2


def _gate_count(circuit: cirq.Circuit) -> int:
    cnt = 0
    for op in circuit.all_operations():
        g = getattr(op, "gate", None)
        if isinstance(g, cirq.Gate) and not isinstance(g, cirq.MeasurementGate):
            cnt += 1
    return cnt


def _which_encoding(cirq_string: str, circ: cirq.Circuit | None = None) -> str:
    if circ is None:
        circ = verify_cirq_syntax(cirq_string)
    if isinstance(circ, cirq.Circuit):
        nq = len(circ.all_qubits())
        if nq == 2:
            return "amplitude"
        has_ry = any(isinstance(getattr(op, "gate", None), cirq.YPowGate) for op in circ.all_operations())
        if has_ry:
            return "angle"
        has_h = any(isinstance(getattr(op, "gate", None), cirq.HPowGate) for op in circ.all_operations())
        has_x = any(isinstance(getattr(op, "gate", None), cirq.XPowGate) for op in circ.all_operations())
        if has_h and has_x:
            return "basis"
    txt = cirq_string.lower()
    if "ry(" in txt:
        return "angle"
    return "basis"


error_text: list[str] = []


def verify_cirq_syntax(output: str) -> cirq.Circuit | None:
    assert isinstance(output, str)
    try:
        if output.lstrip().startswith("{"):
            circuit = cirq.read_json(json_text=output)
            if isinstance(circuit, cirq.Circuit):
                print("    Cirq JSON parsed successfully.")
                return circuit
    except Exception as e:
        error_text.append(f"[Cirq JSON Parse Error]: {e}")
        print(f"    [Cirq JSON Parse Error]: {e}")

    env = {"cirq": cirq, "np": np, "math": math}
    try:
        exec(compile(output, "<cirq_string>", "exec"), env, env)
        if "circuit" in env and isinstance(env["circuit"], cirq.Circuit):
            print("    Cirq code parsed successfully (variable 'circuit').")
            return env["circuit"]
        for fn in ("circuit", "algorithm", "build", "model"):
            if fn in env and callable(env[fn]):
                c = env[fn]()
                if isinstance(c, cirq.Circuit):
                    print(f"    Cirq code parsed successfully (function '{fn}()').")
                    return c
        error_text.append("[Cirq Code Parse Error]: No circuit found in code.")
        print("    [Cirq Code Parse Error]: No circuit found in code.")
        return None
    except Exception as e:
        error_text.append(f"[Cirq Code Exec Error]: {e}")
        print(f"    [Cirq Code Exec Error]: {e}")
        return None


def efficiency_check(cirq_string, dire_gt, code_string, run_and_analyze_func, gd_run_and_analyze_func, dire, n):
    circuit_model = verify_cirq_syntax(cirq_string)
    if circuit_model is None:
        return 'nan', 'nan', float('nan')

    which = _which_encoding(cirq_string, circuit_model)

    if which == "basis":
        qc_gd = _basis_baseline()
    elif which == "amplitude":
        qc_gd = _amplitude_baseline()
    else:
        qc_gd = _angle_baseline()

    try:
        model_generated_count = _gate_count(circuit_model)
        gd_count = _gate_count(qc_gd)
    except Exception:
        model_generated_count = 0
        gd_count = 0

    gate_count_ratio = 'nan' if model_generated_count == 0 else (gd_count / model_generated_count)
    shot_ratio = 'nan'
    time_ratio = float('nan')
    return gate_count_ratio, shot_ratio, time_ratio


def execute_test_cases(cirq_string, run_and_analyze_func, n, shots=10):
    circ = verify_cirq_syntax(cirq_string)
    if circ is None:
        raise ValueError("Cirq string cannot be parsed into a Circuit.")

    which = _which_encoding(cirq_string, circ)

    try:
        sv = _simulate_statevector(circ)
        is_density = False
    except Exception:
        rho = _simulate_density_matrix(circ)
        is_density = True

    if which == "basis":
        tgt = _target_basis_state()
        if is_density:
            score = float(np.vdot(tgt, rho @ tgt).real)
        else:
            score = _fidelity(sv, tgt)

    elif which == "amplitude":
        tgt = _target_amplitude_state()
        if is_density:
            score = float(np.vdot(tgt, rho @ tgt).real)
        else:
            score = _fidelity(sv, tgt)

    else:  # angle
        if is_density:
            p = np.real(np.diag(rho))
        else:
            p = _probs_from_vec(sv)
        vec0 = _simulate_statevector(_angle_baseline())
        p0 = _probs_from_vec(vec0)
        score = float(np.sum(np.sqrt(p * p0)))

    print(f"        Result score ({which}): {score:.6f}")
    return score


def check_model(qasm_string, n, t=1):
    qasm_syntax = -1
    print(
        "QAE task does't need model to write post-processing. So here code_syntax = nan (N/A) is correct.")
    code_syntax = float("nan")
    result_score = 0.0
    gate_count_ratio = float('nan')
    print("QAE task does't need shots. So here nan (N/A) is correct.")
    shot_ratio = float('nan')
    time_ratio = float('nan')

    circuit = verify_cirq_syntax(qasm_string)
    if circuit is None:
        qasm_syntax = 0
        return qasm_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio
    else:
        qasm_syntax = 1

    gate_count_ratio, shot_ratio, time_ratio = efficiency_check(
        qasm_string, dire_gt="", code_string="", run_and_analyze_func=None,
        gd_run_and_analyze_func=None, dire="", n=n
    )

    try:
        result_score = execute_test_cases(qasm_string, None, n)
    except Exception as e:
        print(f"Post-processing running-time error: {e}")
        error_text.append(f"[Python Code Running-Time Error]: {e}")
        result_score = 0.0

    return qasm_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio


def check_description(prompt):
    s1 = "Encode a normalized length-$N$ vector $\mathbf{x} = (x_0, \ldots, x_{N-1})$ into amplitudes"
    s2 = "igotimes_{i=1}^{N} U(x_j^{(i)})$"
    s3 = "Map an $N$-bit string $\mathbf{x} = (b_1, \ldots, b_N)$ to the computational basis state"
    if s1 in prompt:
        return s1 in prompt, {"n": 2}
    elif s2 in prompt:
        return s2 in prompt, {"n": 3}
    elif s3 in prompt:
        return s3 in prompt, {"n": 3}
    else:
        return False, {}
