import importlib.util
import time
import re
import cirq


from superdense_post_processing import run_and_analyze as ground_truth_run_and_analyze


# ---------- Helpers ----------


def load_algorithm_module(message: str):
    """Load ground-truth per-message algorithm module."""
    file_path = f"./algorithm_circuit/superdense_mes{message}.py"
    spec = importlib.util.spec_from_file_location(f"superdense_mes{message}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def measure_gate_count(circuit: cirq.Circuit) -> int:
    """Count non-measurement gates."""
    flat = [
        op.gate
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
        and not isinstance(op.gate, cirq.MeasurementGate)
    ]
    return len(flat)


def expr_backtrack(expr, code_string, eval_globals, local_vars, default=float("nan")):
    """Best-effort to evaluate 'repetitions=...' from the post-proc code string."""
    try:
        value = eval(expr, eval_globals, local_vars)
        return int(value) if isinstance(value, int) else default
    except Exception as e:
        print(f"[Eval Error] expr='{expr}' → {e}")

    varname = expr.strip().split(".")[0]
    lines = code_string.splitlines()
    target = -1
    for i, line in enumerate(lines):
        if "repetitions" in line and expr in line:
            target = i
            break
    if target == -1:
        return default

    pat = re.compile(rf"^\s*{re.escape(varname)}\s*=\s*(.+)")
    for i in range(target - 1, -1, -1):
        m = pat.match(lines[i])
        if m:
            rhs = m.group(1).strip()
            try:
                val = eval(rhs, eval_globals)
                eval_globals[varname] = val
                value = eval(expr, eval_globals, local_vars)
                return int(value) if isinstance(value, int) else default
            except Exception:
                continue
    return default


# ---------- Main verification ----------


def check_model(
    message: str, algo_str: str, post_proc_str: str, num_trials=10, shots_per_trial=1
):
    """
    Verify Superdense-Coding algorithm/post-proc given as Python strings.

    Returns:
      (circuit_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio)
    """
    circuit_syntax = 0
    code_syntax = 0
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # 1) Algorithm syntax
    try:
        algo_env = {}
        exec(algo_str, algo_env, algo_env)
        algorithm_fn = algo_env["algorithm"]
        circ = algorithm_fn()  # message baked into code_str OR not needed
        cirq.Simulator().run(circ)  # smoke test
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2) Post-processing syntax
    try:
        post_env = {}
        exec(post_proc_str, post_env, post_env)
        postprocess_fn = post_env["run_and_analyze"]
        # smoke test on GT
        gt_circ = load_algorithm_module(message).algorithm()
        _ = postprocess_fn(gt_circ.copy())
        code_syntax = 1
        print("[✓] Post-processing code loaded successfully.")
    except Exception as e:
        print("[✗] Post-processing syntax error:", e)
        postprocess_fn = ground_truth_run_and_analyze

    if not (circuit_syntax and code_syntax):
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # 3) Evaluate
    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times = []
    truth_times = []

    for _ in range(num_trials):
        try:
            circ_model = algorithm_fn()
            gate_counts.append(measure_gate_count(circ_model))

            t0 = time.time()
            preds = [postprocess_fn(circ_model) for _ in range(shots_per_trial)]
            model_times.append(time.time() - t0)
            total_correct += sum(p == message for p in preds)

            gt_circ = load_algorithm_module(message).algorithm()
            t0 = time.time()
            gt_preds = [
                ground_truth_run_and_analyze(gt_circ.copy())
                for _ in range(shots_per_trial)
            ]
            truth_times.append(time.time() - t0)
            if not all(p == message for p in gt_preds):
                print(f"[✗] Ground truth mismatch: {gt_preds} vs {message}")
                break

        except Exception as e:
            print("[✗] Runtime error:", e)
            return (
                circuit_syntax,
                code_syntax,
                result_score,
                gate_count_ratio,
                shot_ratio,
                time_ratio,
            )

    # Shot ratio from code (default 1)
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
        shot_model = expr_backtrack(
            shot_expr, post_proc_str, eval_globals, local_vars, default=1
        )
    else:
        shot_model = 1

    # 4) Metrics (model / ground_truth)
    result_score = total_correct / total_shots if total_shots else 0.0

    avg_gate_model = (
        sum(gate_counts) / len(gate_counts) if gate_counts else float("nan")
    )
    avg_gate_truth = measure_gate_count(load_algorithm_module(message).algorithm())
    gate_count_ratio = (
        (avg_gate_model / avg_gate_truth) if avg_gate_truth else float("nan")
    )

    shot_truth = 1
    shot_ratio = shot_model / shot_truth

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


# ---------- Example (replace with your own strings) ----------

_example_algo_str = """
import cirq
def algorithm():
    q0, q1 = cirq.LineQubit.range(2)
    c = cirq.Circuit()
    # Bell pair
    c.append(cirq.H(q0))
    c.append(cirq.CX(q0, q1))
    # Alice encodes message='01' (Z only)
    c.append(cirq.Z(q0))
    # Bob decodes
    c.append(cirq.CX(q0, q1))
    c.append(cirq.H(q0))
    c.append(cirq.measure(q0, key='c0'))
    c.append(cirq.measure(q1, key='c1'))
    return c
"""

_example_post_proc_str = """
import cirq

def run_and_analyze(circuit):
    sim = cirq.Simulator()
    res = sim.run(circuit, repetitions=1)

    n = len(res.measurements)

    bits = []
    for i in reversed(range(n)):
        bits.append(str(res.measurements[f"c{i}"][0][0]))
    return "".join(bits)
"""


if __name__ == "__main__":
    # Make sure you've run superdense_dataset.py to create ground-truth files first.
    results = check_model(
        message="01",
        algo_str=_example_algo_str,
        post_proc_str=_example_post_proc_str,
        num_trials=5,
        shots_per_trial=1,
    )
    print("Verification Results:")
    print(f"Circuit Syntax: {results[0]}")
    print(f"Code   Syntax: {results[1]}")
    print(f"Result Score:  {results[2]:.3f}")
    print(f"Gate Cnt Ratio:{results[3]}")
    print(f"Shot Ratio:    {results[4]}")
    print(f"Time Ratio:    {results[5]}")
