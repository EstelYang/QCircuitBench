from __future__ import annotations
import os
import glob
from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
from qae_generation import auto_encoder_circuit


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def state_oracle(state: str):
    circuit = QuantumCircuit(5)
    for idx, integer in enumerate(state):
        if integer == '1':
            circuit.x(idx)
    oracle_gate = circuit.to_gate()
    oracle_gate.name = "OraclePrep"
    return oracle_gate


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    input_dir = f"full_circuit"
    qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))
    for n, input_file in zip(range(1, 32), qasm_files):
        state = format(n, '05b')
        output_qasm_file = f"qae_state{state}.qasm"
        oracle_file = "oracle.inc"

        circuit_save = False
        oracle_dir = f"test_oracle/trial{state}"
        oracle_dir2 = f"test_oracle"

        if not os.path.exists(oracle_dir):
            os.makedirs(oracle_dir)

        txt_file_name = "oracle_info.txt"
        with open(f"{oracle_dir}/{txt_file_name}", "w") as file:
            file.write(f"State string: {state}")

        with open(input_file, "r") as file:
            content = file.read()

        oracle_pos = content.find("gate OraclePrep")
        if oracle_pos == -1:
            raise ValueError("Oracle gate not found in the file")

        oracle_pos2 = content.find("gate OracleSwap")
        if oracle_pos2 == -1:
            raise ValueError("Oracle gate not found in the file")

        register_pos = content.find("bit")
        if register_pos == -1:
            raise ValueError("Register not found in the file")

        oracle_def = content[oracle_pos:oracle_pos2]
        swap_def = content[oracle_pos2:register_pos]
        with open(f"{oracle_dir}/{oracle_file}", "w") as file:
            file.write(oracle_def)

        with open(f"{oracle_dir2}/{oracle_file}", "w") as file:
            file.write(swap_def)

        if not circuit_save:
            rest_qasm = (
                    content[:oracle_pos]
                    + f'include "{oracle_file}";\n'
                    + content[register_pos:]
            )
            with open(output_qasm_file, "w") as file:
                file.write(rest_qasm)
            circuit_save = True


def swap_test_orcale():
    circuit = QuantumCircuit(8)
    circuit.h(7)
    for i in range(2):
        circuit.cswap(7, 2 + i, 2 + 2 + i)

    circuit.h(7)
    oracle_gate = circuit.to_gate()
    oracle_gate.name = "OracleSwap"
    return oracle_gate


def generate_circuit_qasm(test_num=20):
    """Generates QASM files for the Quantum Auto-Encoder algorithm with different oracles."""
    for n in range(1, 32):
        bin_str = format(n, "05b")
        directory = f"full_circuit/"
        state = state_oracle(bin_str)
        swap_test = swap_test_orcale()
        qae_circuit = auto_encoder_circuit(state, swap_test)
        filename = f"qae_state{bin_str}.qasm"
        save_qasm(qae_circuit, directory, filename)


if __name__ == "__main__":
    generate_circuit_qasm()
    extract_gate_definition()
