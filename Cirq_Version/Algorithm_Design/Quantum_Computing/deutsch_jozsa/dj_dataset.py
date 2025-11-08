import os


def save_algorithm_py(n):
    """Save Deutsch-Jozsa Cirq algorithm circuit template for n qubits."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/deutsch_jozsa_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n")
        f.write("def algorithm(Oracle):\n")
        f.write(f"    qubits = cirq.LineQubit.range({n + 1})\n")
        f.write("    circuit = cirq.Circuit()\n\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")
        f.write(f"    circuit.append(cirq.X(qubits[{n}]))\n")
        f.write(f"    circuit.append(cirq.H(qubits[{n}]))\n\n")
        f.write("    circuit.append(Oracle.on(*qubits))\n\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.measure(qubits[{i}], key='c{i}'))\n")
        f.write("\n")
        f.write("    return circuit\n")


def generate_deutsch_jozsa_dataset(start_n=2, end_n=30):
    for n in range(start_n, end_n + 1):
        print(f"Generating for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_deutsch_jozsa_dataset()
