import os


def save_algorithm_py(n: int):
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = f"./algorithm_circuit/diffusion_n{n}.py"
    lines = []
    lines.append("import cirq\n")
    lines.append("\n")
    lines.append("def diffuser_circuit():\n")
    lines.append(f"    qubits = cirq.LineQubit.range({n})\n")
    lines.append("    circuit = cirq.Circuit()\n")

    for i in range(n):
        lines.append(f"    circuit.append(cirq.H(qubits[{i}]))\n")

    for i in range(n):
        lines.append(f"    circuit.append(cirq.X(qubits[{i}]))\n")

    lines.append(f"    circuit.append(cirq.H(qubits[{n-1}]))\n")

    lines.append(
        f"    circuit.append(cirq.X.controlled(num_controls={n-1}).on(*qubits))\n"
    )

    lines.append(f"    circuit.append(cirq.H(qubits[{n-1}]))\n")

    for i in range(n):
        lines.append(f"    circuit.append(cirq.X(qubits[{i}]))\n")

    for i in range(n):
        lines.append(f"    circuit.append(cirq.H(qubits[{i}]))\n")

    lines.append("    return circuit\n")

    with open(path, "w") as f:
        f.writelines(lines)


def generate_diffuser_py(start_n: int = 2, end_n: int = 14):
    for n in range(start_n, end_n + 1):
        print(f"Generating diffuser file for n={n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_diffuser_py()
