import importlib.util
import time
import random
import cirq
import re
import numpy as np
from scipy.stats import chisquare, entropy


def _to_bitstr(x, bit_length: int) -> str:
    try:
        if isinstance(x, str):
            s = x.strip()
            if s.isdigit() and set(s) <= set("0123456789") and set(s) - set("01"):
                return format(int(s), f"0{bit_length}b")[-bit_length:]
            if set(s) <= set("01"):
                return s.zfill(bit_length)[-bit_length:]
            raise ValueError(f"Unexpected string for bitstring: {s!r}")

        # numpy/int
        if isinstance(x, (int, np.integer)):
            return format(int(x), f"0{bit_length}b")[-bit_length:]

        # list/ndarray of bits
        if isinstance(x, (list, tuple, np.ndarray)):
            arr = np.asarray(x)
            if np.iscomplexobj(arr):
                raise TypeError("Expected bits/0-1 array, got complex amplitudes.")
            arr = arr.astype(int).ravel()
            return "".join("1" if v else "0" for v in arr)[-bit_length:].zfill(bit_length)

    except:
        raise TypeError(f"Cannot convert type {type(x)} to bitstring")

    raise TypeError(f"Cannot convert type {type(x)} to bitstring")


def ground_truth_run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)
    n = len(result.measurements)
    output_bits = "".join(str(result.measurements[f"c{i}"][0][0]) for i in range(n))
    return output_bits


def load_algorithm_module(n):
    file_path = f"./algorithm_circuit/qrng_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"qrng_n{n}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def measure_gate_count(circuit):
    flat = [
        op.gate
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
           and not isinstance(op.gate, cirq.MeasurementGate)
    ]
    return len(flat)


def frequency_test(data, bit_length):
    if not data:
        return float("nan"), float("nan")

    num_outcomes = 2 ** bit_length
    observed_counts = [0] * num_outcomes

    valid = 0
    try:
        for number in data:
            bstr = _to_bitstr(number, bit_length)
            idx = int(bstr, 2)
            observed_counts[idx] += 1
            valid += 1
    except Exception:
        return float("nan"), float("nan")

    if valid == 0:
        return float("nan"), float("nan")

    expected_count = valid / num_outcomes
    expected_counts = [expected_count] * num_outcomes

    chi2_stat, p_value = chisquare(observed_counts, expected_counts)
    return chi2_stat, p_value


def autocorrelation_test(data, bit_length):
    if not data:
        return float("nan")
    try:
        values = np.array([int(_to_bitstr(number, bit_length), 2) for number in data])
        mean = np.mean(values)
        autocorr = np.correlate(values - mean, values - mean, mode="full")
        mid = len(autocorr) // 2
        autocorr = autocorr[mid:]
        autocorr /= autocorr[0]  # Normalize
        return autocorr[1]
    except TypeError:
        return float("nan")


def entropy_test(data):
    # Count occurrences to compute probabilities
    if not data:
        return float("nan")
    try:
        values, counts = np.unique(data, return_counts=True)
        probabilities = counts / counts.sum()
        return entropy(probabilities, base=2)
    except TypeError:
        return float("nan")


def expr_backtrack(expr, code_string, eval_globals, local_vars, default=float("nan")):
    """Try to evaluate an expression by tracing variable assignments backwards."""
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
        match = pattern.match(code_lines[i])
        if match:
            rhs_expr = match.group(1).strip()
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


def check_model(algo_str, post_proc_str, n, num_trials=8, shots_per_trial=8):
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # 1. Algorithm syntax check
    try:
        algo_env = {}
        exec(algo_str, globals(), algo_env)
        algorithm_fn = algo_env["algorithm"]
        circuit_gt = algorithm_fn()
        cirq.Simulator().run(circuit_gt)
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    # 2. Post-processing syntax check
    try:
        post_env = {}
        exec(post_proc_str, globals(), post_env)
        postprocess_fn = post_env["run_and_analyze"]
        circuit_gt = load_algorithm_module(n).algorithm()
        try:
            postprocess_fn(circuit_gt)
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:
                    algo_env = {}
                    exec(algo_str, globals(), algo_env)
                    algorithm_fn = algo_env["algorithm"]
                    circuit_algo = algorithm_fn()
                    postprocess_fn(circuit_algo.copy())
                    code_syntax = 1
                except Exception as e:
                    raise
            raise
        print("[✓] Post-processing code loaded successfully.")
    except Exception as e:
        print("[✗] Post-processing syntax error:", e)

    if not (circuit_syntax or code_syntax):
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # 3. Run evaluation
    trials = (2 ** num_trials) * shots_per_trial
    data = []
    gate_counts = []
    model_times = []
    truth_times = []

    try:
        circuit_model = algorithm_fn()
        gate_counts.append(measure_gate_count(circuit_model))
        for _ in range(trials):
            start = time.time()
            data.append(postprocess_fn(circuit_model.copy()))
            model_times.append(time.time() - start)

            circuit_gt = load_algorithm_module(n).algorithm()
            start = time.time()
            ground_truth_run_and_analyze(circuit_gt.copy())
            truth_times.append(time.time() - start)

    except Exception as e:
        print(f"[✗] Runtime error during trial: {e}")
        return (
            circuit_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )

    # 4. Compute shot ratio
    shot_expr = None
    match = re.search(
        r"repetitions\s*=\s*((?:[^\s,)\n#]+(?:\s*[-+*/]\s*[^\s,)\n#]+)*))",
        post_proc_str,
    )
    if match:
        shot_expr = match.group(1)
    if shot_expr:
        eval_globals = globals().copy()
        eval_globals["n"] = n
        local_vars = {}
        shot_model = expr_backtrack(
            shot_expr, post_proc_str, eval_globals, local_vars, default=1
        )
    else:
        shot_model = 1

    # 5. Compute metrics
    shot_truth = 1
    shot_ratio = shot_model / shot_truth

    chi2_stat, chi2_p = frequency_test(data, n)
    auto_corr = autocorrelation_test(data, n)
    entropy_val = entropy_test(data)
    print(f"    Chi-Squared Test: Statistic={chi2_stat}, P-value={chi2_p}")
    print(f"    Autocorrelation Coefficient: {auto_corr}")
    print(f"    Entropy: {entropy_val} bits")

    try:
        chi2_score = chi2_p
        autocorr_score = min(1, max(0, 1 - abs(auto_corr)))
        entropy_score = min(1, max(0, entropy_val / (n - 1)))

        print(chi2_score, autocorr_score, entropy_score)
        result_score = (chi2_score + autocorr_score + entropy_score) / 3
    except Exception as e:
        result_score = 0.
    gate_count_ratio = sum(gate_counts) / (
            measure_gate_count(load_algorithm_module(n).algorithm()) + 1e-6
    )
    time_ratio = sum(model_times) / (sum(truth_times) + 1e-6)

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


def check_description(prompt):
    s = 'The Greenberger-Horne-Zeilinger State (GHZ State) is a maximally entangled state defined as'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
