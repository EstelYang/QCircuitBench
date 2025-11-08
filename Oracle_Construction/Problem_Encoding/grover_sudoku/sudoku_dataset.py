from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import argparse
import os
from sudoku_generation import sudoku_oracle


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)
    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_circuit_qasm():
    """Generates QASM files for the Sudoku Oracle."""
    oracle, qubit_num = sudoku_oracle()
    circuit = QuantumCircuit(qubit_num)
    circuit.append(oracle, range(qubit_num))
    directory = "full_circuit"
    filename = f"sudoku.qasm"
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
    main()
