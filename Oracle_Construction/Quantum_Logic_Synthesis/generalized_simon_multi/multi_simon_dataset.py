from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import os
import re
import random
import argparse
from multi_simon_generation import multi_simon_oracle


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    qasm_path = os.path.join(directory, filename)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)

    with open(qasm_path, "r") as file:
        qasm_content = file.read()

    # Replace all occurrences of '-' with '_'
    qasm_content = re.sub(r"-", "_", qasm_content)

    # Save the modified content back to the file
    with open(qasm_path, "w") as file:
        file.write(qasm_content)


def generate_random_strings(n, test_num=5):
    """Generates secret strings of length n as test cases."""
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm(test_num=5):
    """Generates QASM files for the Simon algorithm with different oracles."""
    for n in range(2, 31):
        directory = f"full_circuit/multi_simon_n{n}"
        secret_strings1 = generate_random_strings(n, test_num)
        secret_strings2 = generate_random_strings(n, test_num)
        key_strings = generate_random_strings(n, test_num)
        for secret_string1, secret_string2 in zip(secret_strings1, secret_strings2):
            for key_string in key_strings:
                oracle = multi_simon_oracle(
                    n, secret_string1, secret_string2, key_string
                )
                circuit = QuantumCircuit(2 * n + 1)
                circuit.append(oracle, range(2 * n + 1))
                filename = f"multi_simon_n{n}_s(1){secret_string1}_s(2){secret_string2}_k{key_string}.qasm"
                save_qasm(circuit, directory, filename)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=["qasm"],
        help="The function to call: generate qasm circuit.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()


if __name__ == "__main__":
    # main()
    generate_circuit_qasm()
