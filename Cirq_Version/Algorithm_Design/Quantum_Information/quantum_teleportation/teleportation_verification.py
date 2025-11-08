import importlib.util
import random
import time
import re
import numpy as np
import cirq

from teleportation_psi import PsiInit
from teleportation_post_processing import (
    run_and_analyze as ground_truth_run_and_analyze,
)


# ---------- Helpers ----------


def load_algorithm_module():
    """Load the ground-truth teleportation algorithm module."""
    path = "./algorithm_circuit/teleportation.py"
    spec = importlib.util.spec_from_file_location("teleportation", path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def measure_gate_count(circuit: cirq.Circuit) -> int:
    """Count non-measurement gates, unwrapping classical control if present."""
    count = 0
    for moment in circuit:
        for op in moment.operations:
            base = op
            # unwrap classically controlled operations
            if hasattr(op, "operation"):
                base = op.operation
            if isinstance(base.gate, cirq.Gate) and not isinstance(
                base.gate, cirq.MeasurementGate
            ):
                count += 1
    return count


def random_psi():
    """Sample a random pure 1-qubit state |psi>=alpha|0>+beta|1> (Haar on Bloch sphere)."""
    # Sample theta, phi: theta~acos(2u-1), phi~2πv
    u, v = random.random(), random.random()
    theta = np.arccos(1 - 2 * u)
    phi = 2 * np.pi * v
    alpha = np.cos(theta / 2)
    beta = np.exp(1j * phi) * np.sin(theta / 2)
    return alpha, beta


def reduced_density_matrix(
    rho: np.ndarray, keep: list[int], num_qubits: int
) -> np.ndarray:
    """Return 2^{|keep|}×2^{|keep|} reduced density matrix on qubits in `keep` (sorted indices)."""
    keep = sorted(keep)
    dim = 2**num_qubits
    assert rho.shape == (dim, dim)
    # reshape to (2,...,2 ; 2,...,2)
    rho_nd = rho.reshape((2,) * (2 * num_qubits))

    traced = rho_nd
    cur_n = num_qubits
    # trace out all qubits NOT in keep; do higher indices first so axis numbers stay valid
    for j in sorted(set(range(num_qubits)) - set(keep), reverse=True):
        traced = traced.trace(axis1=j, axis2=j + cur_n)
        cur_n -= 1

    k = len(keep)
    return traced.reshape((2**k, 2**k))


def state_to_density(alpha: complex, beta: complex) -> np.ndarray:
    """|psi><psi| as a 2x2 density matrix."""
    v = np.array([[alpha], [beta]], dtype=complex)
    return v @ v.conj().T


def expr_backtrack(expr, code_string, eval_globals, local_vars, default=float("nan")):
    """Infer repetitions from code string if present (same as in your BV/Grover converters)."""
    try:
        value = eval(expr, eval_globals, local_vars)
        return int(value) if isinstance(value, int) else default
    except Exception as e:
        print(f"[Eval Error] expr='{expr}' → {e}")

    varname = expr.strip().split(".")[0]
    code_lines = code_string.splitlines()
    target_line_index = -1
    for i, line in enumerate(code_lines):
        if "repetitions" in line and expr in line:
            target_line_index = i
            break

    if target_line_index == -1:
        print(f"[Backtrack] Can't locate line for 'repetitions={expr}'")
        return default

    pattern = re.compile(rf"^\s*{re.escape(varname)}\s*=\s*(.+)")
    for i in range(target_line_index - 1, -1, -1):
        m = pattern.match(code_lines[i])
        if m:
            rhs_expr = m.group(1).strip()
            try:
                val = eval(rhs_expr, eval_globals)
                eval_globals[varname] = val
                value = eval(expr, eval_globals, local_vars)
                return int(value) if isinstance(value, int) else default
            except Exception as e2:
                print(f"[Backtrack Eval Fail] {varname} = {rhs_expr} → {e2}")
                continue

    print(f"[Backtrack Failed] No working definition for '{varname}'.")
    return default


# ---------- Main verification ----------


def check_model(algo_str, post_proc_str, num_trials=10, shots_per_trial=1, tol=15e-3):
    """Verify teleportation in Cirq and compute:
    circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio
    """
    circuit_syntax = 0
    code_syntax = 0
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # Load algorithm under test
    try:
        algo_env = {}
        exec(algo_str, algo_env, algo_env)
        algorithm_fn = algo_env["algorithm"]
        # Smoke test
        alpha, beta = 1.0, 0.0
        circuit_algo = algorithm_fn(PsiInit(alpha, beta))
        cirq.Simulator().run(circuit_algo)  # executes measurements & classical controls
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # Load post-processing
    try:
        post_env = {}
        exec(post_proc_str, post_env, post_env)
        postprocess_fn = post_env["run_and_analyze"]
        # quick smoke test against GT algorithm
        gt_algo = load_algorithm_module().algorithm
        _ = postprocess_fn(gt_algo(PsiInit(1.0, 0.0)))
        code_syntax = 1
        print("[✓] Post-processing code loaded successfully.")
    except Exception as e:
        print("[✗] Post-processing syntax error:", e)
        postprocess_fn = ground_truth_run_and_analyze  # fall back

    if not (circuit_syntax and code_syntax):
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # Evaluation
    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times, truth_times = [], []
    dmsim = cirq.DensityMatrixSimulator()

    for _ in range(num_trials):
        alpha, beta = random_psi()
        psi_gate = PsiInit(alpha, beta)

        # Build model & GT circuits
        circuit_model = algorithm_fn(psi_gate)
        circuit_gt = load_algorithm_module().algorithm(psi_gate)

        # Gate count (non-measurement)
        gate_counts.append(measure_gate_count(circuit_model))

        # Run model post-proc and verify by density matrix fidelity on Bob's qubit
        start = time.time()
        outputs = [postprocess_fn(circuit_model) for _ in range(shots_per_trial)]
        model_times.append(time.time() - start)

        # We expect [2] always; still allow model to return any list of indices
        for out in outputs:
            try:
                indices = (
                    list(map(int, out)) if isinstance(out, (list, tuple)) else list(out)
                )
            except Exception:
                indices = [2]  # be forgiving; will still check fidelity

            # Simulate model circuit final density matrix
            rho = dmsim.simulate(circuit_model).final_density_matrix
            # Reduced rho on reported indices (expect [2])
            red = reduced_density_matrix(rho, keep=indices, num_qubits=3)
            goal = state_to_density(alpha, beta)
            ok = np.allclose(red, goal, atol=tol)
            total_correct += 1 if ok else 0

        # Time ground-truth pipeline similarly (post-proc = ground truth)
        start = time.time()
        _ = [ground_truth_run_and_analyze(circuit_gt) for _ in range(shots_per_trial)]
        truth_times.append(time.time() - start)

    # Shot ratio: infer from code string
    shot_expr = None
    m = re.search(
        r"repetitions\s*=\s*((?:[^\s,)\n#]+(?:\s*[-+*/]\s*[^\s,)\n#]+)*))",
        post_proc_str,
    )
    if m:
        shot_expr = m.group(1)
    if shot_expr:
        eval_globals = globals().copy()
        local_vars = {}
        eval_globals["np"] = np
        shot_model = expr_backtrack(
            shot_expr, post_proc_str, eval_globals, local_vars, default=1
        )
    else:
        shot_model = 1

    shot_truth = 1
    shot_ratio = shot_model / shot_truth

    result_score = total_correct / total_shots if total_shots else 0.0
    avg_gate_model = (
        sum(gate_counts) / len(gate_counts) if gate_counts else float("nan")
    )
    avg_gate_truth = measure_gate_count(
        load_algorithm_module().algorithm(PsiInit(1.0, 0.0))
    )
    gate_count_ratio = (
        (avg_gate_model / avg_gate_truth) if avg_gate_truth else float("nan")
    )

    avg_time_model = (
        sum(model_times) / len(model_times) if model_times else float("nan")
    )
    avg_time_truth = (
        sum(truth_times) / len(truth_times) if truth_times else float("nan")
    )
    time_ratio = (avg_time_model / avg_time_truth) if avg_time_truth else float("nan")

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


# ---------- Example smoke test ----------

_example_algo_str = """
import cirq

def algorithm(psi_gate):
    q0, q1, q2 = cirq.LineQubit.range(3)
    c = cirq.Circuit()
    c.append(psi_gate.on(q0))
    c.append(cirq.H(q1))
    c.append(cirq.CX(q1, q2))
    c.append(cirq.CX(q0, q1))
    c.append(cirq.H(q0))
    c.append(cirq.measure(q0, key='c0'))
    c.append(cirq.measure(q1, key='c1'))
    c.append(cirq.X(q2).with_classical_controls('c1'))
    c.append(cirq.Z(q2).with_classical_controls('c0'))
    return c
"""

_example_post_proc_str = """
def run_and_analyze(circuit):
    # For teleportation, we just report Bob's qubit index.
    return [2]
"""

if __name__ == "__main__":
    # Make sure the GT algorithm file exists
    # (run teleportation_dataset.py once to create algorithm_circuit/teleportation.py)
    results = check_model(
        algo_str=_example_algo_str,
        post_proc_str=_example_post_proc_str,
        num_trials=10,
        shots_per_trial=1,
        tol=15e-3,
    )
    print("Verification Results:")
    print(f"Circuit Syntax: {results[0]}")
    print(f"Code   Syntax: {results[1]}")
    print(f"Result Score:  {results[2]:.3f}")
    print(f"Gate Cnt Ratio:{results[3]}")
    print(f"Shot Ratio:    {results[4]}")
    print(f"Time Ratio:    {results[5]}")
