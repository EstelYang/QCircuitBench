import importlib.util
import random
import time
import cirq
import re
import numpy as np
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    secret_string: str

    def _num_qubits_(self):
        return len(self.secret_string)

    def _decompose_(self, qubits):
        for i, bit in enumerate(self.secret_string):
            if bit == "1":
                yield cirq.X(qubits[i])

    def _circuit_diagram_info_(self, args):
        return [f"Psi{i}" for i in range(self.num_qubits())]


def ground_truth_run_and_analyze(circuit):
    """Return the qubit indices of the teleported state."""
    return list(range(len(circuit.all_qubits())))



def load_algorithm_module(n):
    file_path = f"external_files/quantum_fourier_transformation/algorithm_circuit/qft_n{n}.py"
    spec = importlib.util.spec_from_file_location(f"qft_n{n}", file_path)
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


def generate_oracle_gate(n):
    """Generates a random input bitstring for Psi state preparation."""
    secret_string = "".join(random.choices("01", k=n))
    return Oracle(secret_string)


def goal_state_vector(n, x):
    """Return the ideal QFT-transformed state vector for input x."""
    state = np.zeros(2**n, dtype=complex)
    for k in range(2**n):
        state[k] = np.exp(2j * np.pi * k * x / 2**n)
    return state / np.sqrt(2**n)


def bit_reverse(x, n):
    """Reverse the bitstring representation of x (length n)."""
    return int(f"{x:0{n}b}"[::-1], 2)


def verify_result_full_state(circuit, n, x_num):
    """Compare full output state vector to ideal QFT-transformed state."""
    sim = cirq.Simulator()
    result = sim.simulate(circuit)
    actual_state = result.final_state_vector

    expected_state = goal_state_vector(n, x_num)
    fidelity = np.abs(np.vdot(expected_state, actual_state)) ** 2
    return fidelity, actual_state, expected_state


def check_model(algo_str, post_proc_str, n, num_trials=10, shots_per_trial=10):
    circuit_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    try:
        algo_env = {}
        exec(algo_str, globals(), algo_env)
        algorithm_fn = algo_env["algorithm"]
        oracle_gate = generate_oracle_gate(n)
        circuit_algo = algorithm_fn(oracle_gate)
        cirq.Simulator().simulate(circuit_algo)
        circuit_syntax = 1
        print("[✓] Algorithm code loaded successfully.")
    except Exception as e:
        print("[✗] Algorithm syntax error:", e)

    try:
        post_env = {}
        exec(post_proc_str, globals(), post_env)
        postprocess_fn = post_env["run_and_analyze"]
        circuit_gt = load_algorithm_module(n).algorithm(generate_oracle_gate(n))
        try:
            result = postprocess_fn(circuit_gt.copy())
            code_syntax = 1
        except Exception as e:
            if circuit_syntax:
                try:
                    algo_env = {}
                    exec(algo_str, globals(), algo_env)
                    algorithm_fn = algo_env["algorithm"]
                    oracle_gate = generate_oracle_gate(n)
                    circuit_algo = algorithm_fn(oracle_gate)
                    result = postprocess_fn(circuit_algo.copy())
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

    total_correct = 0
    total_shots = num_trials * shots_per_trial
    gate_counts = []
    model_times = []
    truth_times = []

    for trial in range(num_trials):
        oracle_gate = generate_oracle_gate(n)
        secret_string = oracle_gate.secret_string
        x_num = int(secret_string[::-1], 2)

        try:
            circuit_model = algorithm_fn(oracle_gate)
            gate_counts.append(measure_gate_count(circuit_model))

            # Model evaluation
            start = time.time()
            for _ in range(shots_per_trial):
                output = postprocess_fn(circuit_model)
                if output != list(range(n)):
                    print(f"[✗] Incorrect output qubits: {output}")
                    continue
                fidelity, actual_state, expected_state = verify_result_full_state(
                    circuit_model, n, x_num
                )
                total_correct += fidelity
            model_times.append(time.time() - start)

            # Ground truth evaluation
            circuit_gt = load_algorithm_module(n).algorithm(oracle_gate)
            start = time.time()
            for _ in range(shots_per_trial):
                fidelity_gt, actual_state_gt, expected_state_gt = (
                    verify_result_full_state(circuit_gt, n, x_num)
                )
                if fidelity_gt < 0.9:
                    print(
                        f"[✗] GT verification failed for secret={secret_string} with fidelity={fidelity_gt:.4f}"
                    )
                    print(
                        f"    Actual state: {actual_state_gt}\n    Expected state: {expected_state_gt}"
                    )
                    print(f"    Expected state vector: {expected_state_gt}")
            truth_times.append(time.time() - start)

        except Exception as e:
            print(f"[✗] Runtime error during trial (secret={secret_string}):", e)
            return (
                circuit_syntax,
                code_syntax,
                result_score,
                gate_count_ratio,
                shot_ratio,
                time_ratio,
            )

    shot_model = 1
    shot_truth = 1
    shot_ratio = shot_model / shot_truth
    result_score = total_correct / total_shots
    avg_gate_count_model = sum(gate_counts) / num_trials
    avg_gate_count_truth = measure_gate_count(
        load_algorithm_module(n).algorithm(generate_oracle_gate(n))
    )
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
    s = 'Please design a quantum algorithm to implement the following transformation for the integer'
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        return s in prompt, {"n": n}
    else:
        return False, {}
