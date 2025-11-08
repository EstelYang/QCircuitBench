from qiskit.qasm3 import dump
import argparse
import os
from su_generation import efficient_su2


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_circuit_qasm(layers=20):
    """Generates QASM files for variational circuits."""
    mode_ls = ["ladderCNOT", "fullCNOT", "reverse_linearCNOT", "circularCNOT"]
    for n in range(2, 13):
        for mode in mode_ls:
            directory = f"efficient_su2_{mode}/"
            for l in range(1, layers + 1):
                circuit = efficient_su2(n, l, mode)
                filename = f"efficient_su2_n{n}_l{l}_{mode}.qasm"
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
