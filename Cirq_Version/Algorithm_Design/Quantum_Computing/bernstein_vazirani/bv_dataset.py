import os


def save_algorithm_py(n):
    """Saves a Cirq-based Bernstein-Vazirani circuit for qubit number n as a Python file."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/bernstein_vazirani_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm(Oracle):\n")
        f.write(f"    qubits = cirq.LineQubit.range({n + 1})\n")
        f.write("    circuit = cirq.Circuit()\n\n")

        # Apply H gates to input qubits
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")

        # Prepare |-⟩ on last qubit
        f.write(f"    circuit.append(cirq.X(qubits[{n}]))\n")
        f.write(f"    circuit.append(cirq.H(qubits[{n}]))\n\n")

        # Apply Oracle
        f.write("    circuit.append(Oracle.on(*qubits))\n\n")

        # Apply final H gates and measurements
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.measure(qubits[{i}], key='c{i}'))\n")

        f.write("\n    return circuit\n")


def generate_bv_dataset(start_n=2, end_n=30):
    """Generate BV circuits for each qubit number and save them as Python files."""
    for n in range(start_n, end_n + 1):
        print(f"Generating for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_bv_dataset()
