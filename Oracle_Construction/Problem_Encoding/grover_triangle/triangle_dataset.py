from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import random
import argparse
import os
import re
import glob
from triangle_generation import triangle_oracle

CASE_NUM = 5
N_NUM = 15


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)
    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_edges(node_num):
    """Generates the edges randomly for a graph with node_num nodes."""
    edge_list = []
    for i in range(node_num):
        for j in range(i + 1, node_num):
            if random.choice([True, False]):
                edge_list.append([i, j])
    return edge_list


def generate_circuit_qasm():
    """Generates QASM files for the Grover's Trian algorithm."""
    for n in range(3, N_NUM):
        qasm_directory = f"full_circuit/triangle_n{n}"
        txt_directory = f"triangle_n{n}"
        for i in range(CASE_NUM):
            edge_list = generate_edges(n)
            oracle, qubit_num = triangle_oracle(n, edge_list)
            circuit = QuantumCircuit(qubit_num)
            circuit.append(oracle, range(qubit_num))
            filename = f"trial{i}.qasm"
            save_qasm(circuit, qasm_directory, filename)
            txt_file_name = f"info_trial{i}.txt"
            if not os.path.exists(txt_directory):
                os.makedirs(txt_directory)
            with open(f"{txt_directory}/{txt_file_name}", "w") as file:
                file.write(f"Edge list: {edge_list}")


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the oracle circuit alone."""
    for n in range(3, N_NUM):
        input_dir = f"full_circuit/triangle_n{n}"
        output_dir = f"triangle_n{n}"
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)
        customgate_file = "customgates.inc"

        qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))

        gate_def = False
        for input_file in qasm_files:

            output_qasm_file = os.path.basename(input_file)

            with open(input_file, "r") as file:
                content = file.read()

            include_pos = content.find('include "stdgates.inc";')
            if include_pos == -1:
                raise ValueError(
                    "The QASM file does not contain the standard gate definition."
                )

            adder_pos = content.find("gate Adder")
            if adder_pos == -1:
                with open(f"{output_dir}/{output_qasm_file}", "w") as file:
                    file.write(content)
                continue

            if not gate_def:
                gate_def = True
                custom_gates = content[
                    include_pos + len('include "stdgates.inc";') : adder_pos
                ].strip()
                with open(f"{output_dir}/{customgate_file}", "w") as file:
                    file.write(custom_gates)

            rest_qasm = (
                content[: include_pos + len('include "stdgates.inc";')]
                + f'\ninclude "{customgate_file}";\n'
                + content[adder_pos:]
            )

            duplicated_pattern = r"(gate\s+(Adder|Reverse_Adder)_[0-9]+\s[^{]+{[^}]+})"
            rest_qasm = re.sub(duplicated_pattern, "", rest_qasm)

            replace_pattern = r"(Adder|Reverse_Adder)_[0-9]+"
            rest_qasm = re.sub(replace_pattern, r"\1", rest_qasm)

            rest_qasm = re.sub(r"\n\s*\n", "\n", rest_qasm).strip()

            with open(f"{output_dir}/{output_qasm_file}", "w") as file:
                file.write(rest_qasm)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=["qasm", "gate"],
        help="The function to call: generate qasm circuit or extract gate definition.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "gate":
        extract_gate_definition()


if __name__ == "__main__":
    main()
