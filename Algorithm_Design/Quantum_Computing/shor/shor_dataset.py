from qiskit import QuantumCircuit, QuantumRegister, ClassicalRegister, execute, BasicAer
from qiskit.qasm3 import dump
import random
import argparse
import os
import glob
import math

from shor_utils import *
from shor_generation import shor_algorithm, cMULTmodN, modinv
from shor_post_processing import run_and_analyze


def shor_oracle(N, a):
    """Generates the QPE oracle gate for Shor's algorithm."""
    n = math.ceil(math.log(N, 2))
    aux = QuantumRegister(n + 2, "aux")
    up = QuantumRegister(2 * n, "up")
    down = QuantumRegister(n, "down")
    qc = QuantumCircuit(down, up, aux)

    # Controlled modular multiplications
    for i in range(2 * n):
        power = pow(a, 2**i, N)
        cMULTmodN(qc, up[i], down, aux, power, N, n)

    oracle_gate = qc.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate


def save_qasm(circuit: QuantumCircuit, directory: str, filename: str):
    """Saves a QuantumCircuit to a QASM 3.0 file."""
    os.makedirs(directory, exist_ok=True)
    with open(os.path.join(directory, filename), "w") as f:
        dump(circuit, f)


def generate_circuit_qasm():
    """Generates QASM files for Shor's algorithm over specified (N, a) pairs."""
    for N in [15, 21, 91]:
        if N == 15:
            a_range = [4]
        elif N == 21:
            a_range = [2, 5, 8, 10]
        elif N == 91:
            a_range = [2, 4]
        for a in a_range:
            directory = f"full_circuit/shor_{N}_{a}"
            oracle = shor_oracle(N, a)
            shor_qc = shor_algorithm(N, a, oracle)
            filename = f"shor_{N}_{a}.qasm"
            save_qasm(shor_qc, directory, filename)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    for N in [15, 21, 91]:
        if N == 15:
            a_range = [4]
        elif N == 21:
            a_range = [2, 5, 8, 10]
        elif N == 91:
            a_range = [2, 4]
        for a in a_range:
            input_dir = f"full_circuit/shor_{N}_{a}"
            output_qasm_file = f"shor_{N}_{a}.qasm"
            oracle_file = "oracle.inc"

            qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))

            circuit_save = False
            for input_file in qasm_files:
                oracle_dir = f"test_oracle/{N}/{a}"

                if not os.path.exists(oracle_dir):
                    os.makedirs(oracle_dir)

                txt_file_name = "oracle_info.txt"
                with open(f"{oracle_dir}/{txt_file_name}", "w") as file:
                    file.write(f"Oracle function : x^{a} mod {N}")

                with open(input_file, "r") as file:
                    content = file.read()

                oracle_pos = content.find("gate Oracle")
                if oracle_pos == -1:
                    raise ValueError("Oracle gate not found in the file")

                register_pos = content.find("bit")
                if register_pos == -1:
                    raise ValueError("Register not found in the file")

                oracle_def = content[oracle_pos:register_pos]
                with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                    file.write(oracle_def)

                if not circuit_save:
                    rest_qasm = (
                        content[:oracle_pos]
                        + f'include "{oracle_file}";\n'
                        + content[register_pos:]
                    )
                    with open(output_qasm_file, "w") as file:
                        file.write(rest_qasm)
                    circuit_save = True


def check_dataset():
    """Check the generated dataset."""
    text = []
    shots = 10

    for N in [15]:
        if N == 15:
            a_range = [4]
        if N == 21:
            a_range = [2, 5, 8, 10]
        if N == 91:
            a_range = [2, 4]
        for a in a_range:
            print_and_save(f"Verifying Shor Algorithm for N={N}, a={a}", text)
            filename = f"shor_{N}_{a}.qasm"
            with open(filename, "r") as file:
                qasm_code = file.read()

            with open(f"test_oracle/{N}/{a}/oracle.inc", "r") as file:
                oracle_def = file.read()

            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            circuit = verify_qasm_syntax(full_qasm)
            if circuit is None:
                continue

            # Verify the algorithm with different test cases
            circuit = loads(full_qasm)
            simulation = execute(
                circuit, backend=BasicAer.get_backend("qasm_simulator"), shots=shots
            )
            sim_result = simulation.result()
            counts_result = sim_result.get_counts(circuit)
            prob_success, factors = run_and_analyze(counts_result, N, a, shots)
            final_result = "fail"
            print(prob_success, factors)
            for item in factors:
                if item[0] * item[1] == N:
                    final_result = item
                print(item)
            print_and_save(
                f"        Success Prob: {prob_success}, Result: {final_result}",
                text,
            )
        with open("shor_verification.txt", "w") as file:
            text = [line + "\n" for line in text]
            file.write("".join(text))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=["qasm", "gate", "check"],
        help="The function to call: generate qasm circuit, extract gate definition, or check dataset correctness.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "gate":
        extract_gate_definition()
    elif args.func == "check":
        check_dataset()


if __name__ == "__main__":
    check_dataset()
