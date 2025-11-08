import os


def save_algorithm_py(n):
    """Saves a Cirq-based QRNG circuit for qubit number n as a Python file."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/qrng_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm():\n")
        f.write(f"    qubits = cirq.LineQubit.range({n})\n")
        f.write("    circuit = cirq.Circuit()\n\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")
        f.write("\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.measure(qubits[{i}], key='c{i}'))\n")
        f.write("\n")
        f.write("    return circuit\n")


def generate_qrng_dataset(start_n=2, end_n=30):
    """Generate QRNG circuits for each qubit number and save them as Python files."""
    for n in range(start_n, end_n + 1):
        print(f"Generating QRNG circuit for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_qrng_dataset()
