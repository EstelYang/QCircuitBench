import os


def save_algorithm_py(n):
    """Saves a Cirq-based QFT circuit for qubit number n as a Python file."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/qft_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm(Oracle):\n")
        f.write(f"    qubits = cirq.LineQubit.range({n})\n")
        f.write("    circuit = cirq.Circuit()\n\n")

        # Apply state preparation via Oracle
        f.write("    circuit.append(Oracle.on(*qubits))\n\n")

        # Apply Quantum Fourier Transform
        for target_qubit in range(n - 1, -1, -1):
            f.write(f"    circuit.append(cirq.H(qubits[{target_qubit}]))\n")
            for control_qubit in range(target_qubit):
                exponent = 1 / (2 ** (target_qubit - control_qubit))
                f.write(
                    f"    cz_gate_{control_qubit} = cirq.CZPowGate(exponent={exponent})\n"
                )
                f.write(
                    f"    circuit.append(cz_gate_{control_qubit}(qubits[{control_qubit}], qubits[{target_qubit}]))\n"
                )
        f.write("\n")

        # Optionally reverse qubit order (standard in QFT)
        # for target_qubit in range(n // 2):
        #     f.write(
        #         f"    circuit.append(cirq.SWAP(qubits[{target_qubit}], qubits[{n - target_qubit - 1}]))\n"
        #     )
        # f.write("\n")

        f.write("\n    return circuit\n")


def generate_qft_dataset(start_n=2, end_n=30):
    """Generate QFT circuits for each qubit number and save them as Python files."""
    for n in range(start_n, end_n + 1):
        print(f"Generating for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_qft_dataset()
