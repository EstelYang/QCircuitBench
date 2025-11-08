# verification.py  — per-trial ground-truth loader
import importlib.util
import random
import time
import re
import glob
import os
import numpy as np
import cirq

from qkd_post_processing import run_and_analyze as ground_truth_run_and_analyze


def _gt_module_path(n: int, trial: int, intercept: bool) -> str:
    return f"./algorithm_circuit/qkd_n{n}_trial{trial}_{intercept}.py"


def _gt_text_path(n: int, trial: int, intercept: bool) -> str:
    return f"./intercept/qkd_n{n}/qkd_n{n}_trial{trial}_{intercept}.txt"


def list_available_trials(n: int):
    """Return list of (trial:int, intercept:bool) available for this n."""
    paths = glob.glob(f"./algorithm_circuit/qkd_n{n}_trial*_*.*")
    out = []
    pat = re.compile(rf"qkd_n{n}_trial(\d+)_(True|False)\.py$")
    for p in paths:
        m = pat.search(p)
        if not m:
            continue
        trial = int(m.group(1))
        intercept = m.group(2) == "True"
        # make sure sidecar text exists too
        if os.path.exists(_gt_text_path(n, trial, intercept)):
            out.append((trial, intercept))
    out.sort()
    return out


def load_algo_module(n: int, trial: int, intercept: bool):
    """Load ground-truth module ./algorithm_circuit/qkd_n{n}_trial{trial}_{intercept}.py"""
    path = _gt_module_path(n, trial, intercept)
    spec = importlib.util.spec_from_file_location(
        f"qkd_n{n}_t{trial}_{intercept}", path
    )
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def load_text(n: int, trial: int, intercept: bool) -> np.ndarray:
    """Load 3×n int array [alice_bits; alice_bases; bob_bases]."""
    txt = _gt_text_path(n, trial, intercept)
    arr = np.loadtxt(txt, dtype=int)
    # Ensure shape is (3, n)
    if arr.ndim == 1:
        arr = arr.reshape(3, -1)
    return arr


def measure_gate_count(circuit: cirq.Circuit) -> int:
    """Count non-measurement gates in a Cirq circuit."""
    flat = [
        op.gate
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
        and not isinstance(op.gate, cirq.MeasurementGate)
    ]
    return len(flat)


def expr_backtrack(expr, code_string, eval_globals, local_vars, default=float("nan")):
    """Try to evaluate an expression (e.g., 'repetitions') by tracing assignments backward."""
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

    print(f"[Backtrack Failed] No working definition found for '{varname}' before use.")
    return default


def check_model(n, algo_str, post_proc_str, num_trials=10, shots_per_trial=10):
    """
    Verify model-provided QKD algorithm/postproc (as strings) against
    per-trial ground-truth modules: ./algorithm_circuit/qkd_n{n}_trial{t}_{intercept}.py
    """
    circuit_syntax = 0
    code_syntax = 0
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # Discover GT trials for this n
    gt_trials = list_available_trials(n)
    if not gt_trials:
        print(f"[✗] No ground-truth trials found for n={n}.")
        return (0, 0, 0.0, float("nan"), float("nan"), float("nan"))

    # 1) Algorithm syntax (model)
    try:
        algo_env = {}
        exec(algo_str, algo_env, algo_env)
        algorithm_fn = algo_env["algorithm"]

        # Smoke: use the first available GT trial's text to feed the model algorithm
        trial0, intercept0 = gt_trials[0]
        text0 = load_text(n, trial0, intercept0)
        a_bits0 = text0[0, :].tolist()
        a_bases0 = text0[1, :].tolist()
        b_bases0 = text0[2, :].tolist()
        circuit = algorithm_fn(a_bits0, a_bases0, b_bases0, intercept0)
        cirq.Simulator().run(circuit)  # single-shot smoke
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2) Post-processing syntax
    try:
        post_env = {}
        exec(post_proc_str, post_env, post_env)
        postprocess_fn = post_env["run_and_analyze"]

        # Smoke: run postproc on a GT circuit for the same trial
        gt_mod0 = load_algo_module(n, trial0, intercept0)
        gt_circ0 = gt_mod0.algorithm()  # zero-arg; frozen circuit
        _ = postprocess_fn(gt_circ0.copy(), text0)
        code_syntax = 1
        print("[✓] Post-processing code loaded successfully.")
    except Exception as e:
        print("[✗] Post-processing syntax error:", e)
        postprocess_fn = ground_truth_run_and_analyze  # fallback

    if not (circuit_syntax and code_syntax):
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # 3) Evaluation
    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times = []
    truth_times = []

    # Choose trials to evaluate
    if len(gt_trials) >= num_trials:
        chosen = random.sample(gt_trials, k=num_trials)
    else:
        # sample with replacement
        chosen = [random.choice(gt_trials) for _ in range(num_trials)]

    for trial_i, intercept_i in chosen:
        # load baked inputs
        text = load_text(n, trial_i, intercept_i)
        a_bits = text[0, :].tolist()
        a_bases = text[1, :].tolist()
        b_bases = text[2, :].tolist()

        # model circuit
        try:
            circuit_model = algorithm_fn(a_bits, a_bases, b_bases, intercept_i)
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            correct = 0
            for _s in range(shots_per_trial):
                result, _key = postprocess_fn(circuit_model, text)
                judge = result != "Success"
                if judge == intercept_i:
                    correct += 1
            model_times.append(time.time() - start)
            total_correct += correct
        except Exception as e:
            print(f"[✗] Runtime error in model evaluation: {e}")
            break

        # ground-truth circuit timing (sanity)
        try:
            gt_mod = load_algo_module(n, trial_i, intercept_i)
            circuit_gt = gt_mod.algorithm()
            start = time.time()
            for _s in range(shots_per_trial):
                _ = ground_truth_run_and_analyze(circuit_gt.copy(), text)
            truth_times.append(time.time() - start)
        except Exception as e:
            print(f"[✗] Runtime error in GT evaluation: {e}")
            break

    # 4) Shot ratio (infer 'repetitions' if present; default 1)
    shot_expr = None
    m = re.search(
        r"repetitions\s*=\s*((?:[^\s,)\n#]+(?:\s*[-+*/]\s*[^\s,)\n#]+)*))",
        post_proc_str,
    )
    if m:
        shot_expr = m.group(1)

    if shot_expr:
        eval_globals = globals().copy()
        eval_globals["n"] = n
        local_vars = {}
        shot_model = expr_backtrack(
            shot_expr, post_proc_str, eval_globals, local_vars, default=1
        )
    else:
        shot_model = 1

    shot_truth = 1  # GT postproc uses repetitions=1
    shot_ratio = shot_model / shot_truth

    # 5) Metrics
    result_score = total_correct / total_shots if total_shots else 0.0

    # gate_count_ratio vs GT on a fresh (or first) trial
    try:
        avg_gate_model = (
            sum(gate_counts) / len(gate_counts) if gate_counts else float("nan")
        )
        t_ref, i_ref = chosen[0]
        gt_circuit = load_algo_module(n, t_ref, i_ref).algorithm()
        avg_gate_truth = measure_gate_count(gt_circuit)
        gate_count_ratio = (
            avg_gate_model / avg_gate_truth
            if isinstance(avg_gate_truth, (int, float)) and avg_gate_truth
            else float("nan")
        )
    except Exception as e:
        print("[GateCount] failed:", e)
        gate_count_ratio = float("nan")

    try:
        avg_time_model = (
            sum(model_times) / len(model_times) if model_times else float("nan")
        )
        avg_time_truth = (
            sum(truth_times) / len(truth_times) if truth_times else float("nan")
        )
        time_ratio = (
            avg_time_model / avg_time_truth
            if isinstance(avg_time_truth, (int, float)) and avg_time_truth
            else float("nan")
        )
    except Exception as e:
        print("[Timing] failed:", e)
        time_ratio = float("nan")

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


# --- Examples retained for quick local smoke tests (unchanged) ---
_example_algo_str = """
import cirq
import numpy as np

def _alice_message(circuit, qubits, bases, bits, n):
    for i in range(n):
        if bases[i] == 0:
            if bits[i] == 1:
                circuit.append(cirq.X(qubits[i]))
        else:
            if bits[i] == 0:
                circuit.append(cirq.H(qubits[i]))
            else:
                circuit.append([cirq.X(qubits[i]), cirq.H(qubits[i])])

def _eve_intercept(circuit, qubits, n):
    eve_bases = np.random.randint(2, size=n)
    for i in range(n):
        if eve_bases[i] == 0:
            circuit.append(cirq.measure(qubits[i], key=f"e{i}"))
        else:
            circuit.append([cirq.H(qubits[i]), cirq.measure(qubits[i], key=f"e{i}")])

def _bob_measure(circuit, qubits, bases, n):
    for i in range(n):
        if bases[i] == 0:
            circuit.append(cirq.measure(qubits[i], key=f"c{i}"))
        else:
            circuit.append([cirq.H(qubits[i]), cirq.measure(qubits[i], key=f"c{i}")])

def algorithm(alice_bits, alice_bases, bob_bases, intercept):
    n = len(alice_bits)
    qubits = cirq.LineQubit.range(n)
    circuit = cirq.Circuit()
    _alice_message(circuit, qubits, alice_bases, alice_bits, n)
    if intercept:
        _eve_intercept(circuit, qubits, n)
    _bob_measure(circuit, qubits, bob_bases, n)
    return circuit
"""

_example_post_proc_str = """
import numpy as np
import cirq

def find_key(a_bases, b_bases, bits):
    key, idx = [], []
    for i in range(len(a_bases)):
        if a_bases[i] == b_bases[i]:
            key.append(bits[i]); idx.append(i)
    return key, idx

def sample_bits(bits, selection):
    sample = []
    for i in selection:
        i = np.mod(i, len(bits))
        sample.append(bits.pop(i))
    return sample

def run_and_analyze(circuit, text):
    sim = cirq.Simulator()
    res = sim.run(circuit, repetitions=1)
    n = text.shape[1]
    a_bits  = text[0,:].tolist()
    a_bases = text[1,:].tolist()
    b_bases = text[2,:].tolist()
    bob_bits = [int(res.measurements[f"c{i}"][0][0]) for i in range(n)]
    a_key,_ = find_key(a_bases, b_bases, a_bits)
    b_key,_ = find_key(a_bases, b_bases, bob_bits)
    k = len(a_key)//2
    sel = np.random.randint(n, size=k)
    b_s = sample_bits(b_key, sel)
    a_s = sample_bits(a_key, sel)
    if a_s == b_s:
        return "Success", a_key
    else:
        return "Fail", a_key
"""

if __name__ == "__main__":
    # Example: n=20 (uses available per-trial GT files)
    print(
        check_model(
            n=20, algo_str=_example_algo_str, post_proc_str=_example_post_proc_str
        )
    )
