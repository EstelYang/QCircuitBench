import os


def save_algorithm_py(n):
    """Saves a Cirq-based Simon circuit for qubit number n as a Python file."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/simon_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm(oracle_gate):\n")
        f.write(f"    qubits = cirq.LineQubit.range({2 * n})\n")
        f.write("    circuit = cirq.Circuit()\n\n")

        # Apply H gates to the first n qubits
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")

        # Apply Oracle
        f.write("\n    circuit.append(oracle_gate.on(*qubits))\n\n")

        # Apply final H gates to the first n qubits
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")

        # Measure first n qubits
        for i in range(n):
            f.write(f"    circuit.append(cirq.measure(qubits[{i}], key='c{i}'))\n")

        f.write("\n    return circuit\n")


def generate_simon_dataset(start_n=2, end_n=30):
    """Generate Simon circuits for each qubit number and save them as Python files."""
    for n in range(start_n, end_n + 1):
        print(f"Generating for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_simon_dataset()
