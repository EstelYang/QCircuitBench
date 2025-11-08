import networkx as nx
from qiskit.quantum_info import Statevector
from qiskit.qasm3 import dump
import numpy as np
import argparse
import os
from qaoa_maxcut_generation import qaoa_maxcut
from replace_duplicate import detect_and_remove_redundant_gates


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)

    with open(f"{directory}/{filename}", "r") as file:
        qasm_string = file.read()

    optimized_qasm = detect_and_remove_redundant_gates(qasm_string)

    with open(f"{directory}/{filename}", "w") as file:
        file.write(optimized_qasm)


def generate_circuit_qasm(layers=5, mode="cycle"):
    """Generates QASM files for variational circuits."""

    if mode == "cycle":
        for n in range(2, 13):
            directory = f"qaoa_maxcut_n{n}/"
            for l in range(1, layers + 1):
                graph = nx.read_graphml(f"graph/n{n}/cycle_graph_{n}.graphml")
                circuit = qaoa_maxcut(graph, l)
                filename = f"qaoa_maxcut_n{n}_l{l}.qasm"
                save_qasm(circuit, directory, filename)

    if mode == "3-regular":
        for n in [4, 6, 8, 10, 12]:
            directory = f"qaoa_maxcut_n{n}/"
            for l in range(1, layers + 1):
                graph = nx.read_graphml(f"graph/n{n}/3_regular_graph_{n}.graphml")
                circuit = qaoa_maxcut(graph, l)
                filename = f"qaoa_maxcut_3_regular_n{n}_l{l}.qasm"
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
