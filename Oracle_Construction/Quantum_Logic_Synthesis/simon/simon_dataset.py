from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import os
import random
import argparse
from simon_generation import simon_oracle


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_random_strings(n, num_strings):
    """Generates 2^(n-2) secret strings of length n."""
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm():
    """Generate QASM files for the Simon oracle with different settings."""
    for n in range(2, 15):
        directory = f"simon_n{n}"
        secret_strings = generate_random_strings(n, 2 ** (n - 2))
        key_strings = generate_random_strings(n, min(2 ** (n - 2), 20))
        for secret_string in secret_strings:
            subdirectory = f"{directory}/s{secret_string}"
            for key_string in key_strings:
                oracle = simon_oracle(n, secret_string, key_string)
                circuit = QuantumCircuit(2 * n)
                circuit.append(oracle, range(2 * n))
                filename = f"simon_n{n}_s{secret_string}_k{key_string}.qasm"
                save_qasm(circuit, subdirectory, filename)


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
    main()
