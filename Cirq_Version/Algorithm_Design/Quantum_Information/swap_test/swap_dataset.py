import os


def save_algorithm_py(n):
    """Saves a Cirq-based Swap Test circuit for qubit number n as a Python file."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/swap_test_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm(Oracle):\n")
        f.write(f"    qubits = cirq.LineQubit.range(2 * {n} + 1)\n")
        f.write("    ancilla = qubits[-1]\n")
        f.write(f"    psi_qubits = qubits[:{n}]\n")
        f.write(f"    phi_qubits = qubits[{n}:2 * {n}]\n")

        f.write("    circuit = cirq.Circuit()\n\n")

        f.write("    circuit.append(Oracle.on(*psi_qubits, *phi_qubits))\n\n")
        f.write("    circuit.append(cirq.H(ancilla))\n")

        for i in range(n):
            f.write(
                f"    circuit.append(cirq.CSWAP(ancilla, psi_qubits[{i}], phi_qubits[{i}]))\n"
            )
        f.write("    circuit.append(cirq.H(ancilla))\n")
        f.write("    circuit.append(cirq.measure(ancilla, key='result'))\n\n")
        f.write("    return circuit\n")


def generate_swap_test_dataset(start_n=2, end_n=30):
    for n in range(start_n, end_n + 1):
        print(f"Generating for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_swap_test_dataset()
