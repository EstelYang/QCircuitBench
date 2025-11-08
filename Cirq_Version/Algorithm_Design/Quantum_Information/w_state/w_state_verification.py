import importlib.util
import random
import time
import cirq
import numpy as np


def ground_truth_run_and_analyze(circuit):
    """Return the qubit indices of the W state."""
    return list(range(len(circuit.all_qubits())))


def load_algorithm_module(n):
    file_path = f"./algorithm_circuit/w_state_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"w_state_n{n}", file_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def measure_gate_count(circuit):
    return sum(
        1
        for moment in circuit
        for op in moment.operations
        if isinstance(op.gate, cirq.Gate)
        and not isinstance(op.gate, cirq.MeasurementGate)
    )


def goal_state_vector(n):
    goal_state = np.zeros(2 ** n)
    for i in range(n):
        index = 1 << i  # Sets the ith qubit to 1
        goal_state[index] = 1 / np.sqrt(n)
    return goal_state


def verify_result_full_state(circuit, n):
    """Compare the final state to the ideal GHZ state."""
    sim = cirq.Simulator()
    result = sim.simulate(circuit)
    actual_state = result.final_state_vector

    expected_state = goal_state_vector(n)
    fidelity = np.abs(np.vdot(expected_state, actual_state)) ** 2
    return fidelity, actual_state, expected_state


def check_model(algo_str, post_proc_str, n, num_trials=5, shots_per_trial=10):
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    print("W-state task doesn't need shots. So here nan (N/A) is correct.")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    try:
        algo_env = {}
        exec(algo_str, globals(), algo_env)
        algorithm_fn = algo_env["algorithm"]
        circuit_model = algorithm_fn()  # GHZ does not use an oracle
        cirq.Simulator().simulate(circuit_model)
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    try:
        post_env = {}
        exec(post_proc_str, globals(), post_env)
        postprocess_fn = post_env["run_and_analyze"]
        circuit_gt = load_algorithm_module(n).algorithm()
        try:
            postprocess_fn(circuit_gt.copy())
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:  # 给一次自己和自己测的机会
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

    total_fidelity = 0
    gate_counts = []
    model_times = []
    truth_times = []

    for trial in range(num_trials):
        try:
            circuit_model = algorithm_fn()
            gate_counts.append(measure_gate_count(circuit_model))

            start = time.time()
            for _ in range(shots_per_trial):
                output = postprocess_fn(circuit_model)
                if output != list(range(n)):
                    print(f"[✗] Incorrect output qubits: {output}")
                    continue
                fidelity, _, _ = verify_result_full_state(circuit_model, n)
                total_fidelity += fidelity
            model_times.append(time.time() - start)

            circuit_gt = load_algorithm_module(n).algorithm()
            start = time.time()
            for _ in range(shots_per_trial):
                verify_result_full_state(circuit_gt, n)
            truth_times.append(time.time() - start)

        except Exception as e:
            print(f"[✗] Runtime error during trial:", e)
            return (
                circuit_syntax,
                code_syntax,
                result_score,
                gate_count_ratio,
                shot_ratio,
                time_ratio,
            )

    result_score = total_fidelity / (num_trials * shots_per_trial)
    avg_gate_count_model = sum(gate_counts) / num_trials
    avg_gate_count_truth = measure_gate_count(load_algorithm_module(n).algorithm())
    gate_count_ratio = avg_gate_count_model / avg_gate_count_truth

    avg_time_model = sum(model_times) / num_trials
    avg_time_truth = sum(truth_times) / num_trials
    time_ratio = avg_time_model / avg_time_truth

    return (
        circuit_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


def check_description(prompt):
    s = 'The W State is a quantum superposition with equal expansion coefficients of all possible pure states in which exactly one of the qubits is in the excited state'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
