from pathlib import Path
import time
from qiskit.qasm3 import loads
from qiskit import QuantumCircuit, transpile
from qiskit_aer import AerSimulator
import random


def verify_qasm_syntax(output):
    """Verify the syntax of the output and return the corresponding QuantumCircuit (if it is valid)."""
    assert isinstance(output, str)
    try:
        # Parse the OpenQASM 3.0 code
        circuit = loads(output)
        print(
            "    The OpenQASM 3.0 code is valid and has been successfully loaded as a QuantumCircuit."
        )
        return circuit
    except Exception as e:
        print(f"    Error: The OpenQASM 3.0 code is not valid. Details: {e}")
        return None


def generate_random_strings(n, test_num=20):
    """Generates secret strings of length n as test cases."""
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def _compute_gate_count(circuit):
    return sum(circuit.count_ops().values())


def _simulate_time(aer_sim, circuit, shots):
    compiled = transpile(circuit, aer_sim)
    for _ in range(warmup_runs := 3):
        aer_sim.run(compiled, shots=shots).result()
    start = time.time()
    aer_sim.run(compiled, shots=shots).result()
    return time.time() - start


def efficiency_check(qasm_string, n, s1, s2, key_str, total_shot):
    base_dir = None
    base_dir = Path(base_dir) if base_dir else Path.cwd()
    label = f"multi_simon_n{n}_s(1){s1}_s(2){s2}_k{key_str}.qasm"
    gt_path = (
            base_dir
            / "Oracle_Construction"
            / "Quantum_Logic_Synthesis"
            / "generalized_simon_multi"
            / f"multi_simon_n{n}"
            / label
    )
    try:
        model_circuit = loads(qasm_string)
        ground_truth_circuit = loads(gt_path.read_text())
    except Exception:
        return float("nan"), float("nan"), float("nan")

    model_gate_count = _compute_gate_count(model_circuit)
    ground_gate_count = _compute_gate_count(ground_truth_circuit)
    gate_count_ratio = (
        model_gate_count / ground_gate_count if model_gate_count else float("nan")
    )

    print("Oracle Construction tasks don't need shots. So here nan (N/A) is correct.")
    shot_ratio = float("nan")

    aer_sim = AerSimulator()
    model_time = _simulate_time(aer_sim, model_circuit, total_shot)
    ground_time = _simulate_time(aer_sim, ground_truth_circuit, total_shot)
    time_ratio = model_time / ground_time if ground_time else float("nan")

    return gate_count_ratio, shot_ratio, time_ratio


def check_model(qasm_string, n, s1, s2, key_str):
    qasm_syntax = -1
    print(
        "Oracle Construction tasks don't need model to write post-processing. So here code_syntax = nan (N/A) is correct.")
    code_syntax = float("nan")
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    oracle_circuit = verify_qasm_syntax(qasm_string)
    if oracle_circuit is None:
        qasm_syntax = 0
        return (
            qasm_syntax,
            code_syntax,
            result_score,
            gate_count_ratio,
            shot_ratio,
            time_ratio,
        )
    qasm_syntax = 1

    input_states = generate_random_strings(n)
    aer_sim = AerSimulator()
    total_cases = 0
    total_success = 0
    total_shot = 10
    gate_count_ratio, shot_ratio, time_ratio = efficiency_check(
        qasm_string, n, s1, s2, key_str, total_shot
    )
    try:
        for x_str in input_states:
            x_int = int(x_str, 2)
            s1_int = int(s1, 2)
            s2_int = int(s2, 2)
            key_int = int(key_str, 2)

            correct_output_1 = bin(x_int ^ s1_int ^ key_int)[2:].zfill(len(x_str))
            correct_output_2 = bin(x_int ^ s2_int ^ key_int)[2:].zfill(len(x_str))

            print(
                f"    Input: {x_str}, Expected output: {correct_output_1} or {correct_output_2}"
            )

            circuit = QuantumCircuit(oracle_circuit.num_qubits, n)

            reversed_x_str = x_str[::-1]
            for qubit in range(n):
                if reversed_x_str[qubit] == "1":
                    circuit.x(qubit)

            circuit.append(oracle_circuit, range(oracle_circuit.num_qubits))
            circuit.measure(range(n, 2 * n), range(n))
            circ = transpile(circuit, aer_sim)
            print(circ)
            result = aer_sim.run(circ, shots=total_shot).result()
            count = result.get_counts()
            if len(count) != 1:
                print(f"        Error: counts: {count}")
            else:
                output = list(count.keys())[0]
                print(output)
                if output not in [str(correct_output_1), str(correct_output_2)]:
                    print(f"        Error: counts: {count}")
                else:
                    print("        Success")
                    total_success += 1
            total_cases += 1
        if total_cases > 0:
            result_score = total_success / total_cases
    except Exception as e:
        print(f"Run-time error: {e}")

    return (
        qasm_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )


def check_description(prompt):
    s = "secret strings $s_1"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        s1 = prompt.split("$s_1 = ")[1].split("$")[0]
        s2 = prompt.split("$s_2 = ")[1].split("$")[0]
        key_str = prompt.split("$b = ")[1].split("$")[0]
        return s in prompt, {"n": n, "s1": s1, "s2": s2, "key_str": key_str}
    else:
        return False, None
