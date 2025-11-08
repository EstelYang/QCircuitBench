import os
import math


def save_algorithm_py(n):
    """Saves a Cirq-based W state circuit for qubit number n as a Python file."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/w_state_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\nimport math\n\n")
        f.write("def algorithm():\n")
        f.write(f"    qubits = cirq.LineQubit.range({n})\n")
        f.write("    circuit = cirq.Circuit()\n\n")

        # W-state preparation: flip the last qubit
        f.write(f"    circuit.append(cirq.X(qubits[{n-1}]))\n")

        # F-gate sequence
        for i in range(n - 1):
            i1 = n - 1 - i
            i2 = n - 2 - i
            theta = math.acos(math.sqrt(1.0 / (n - i)))
            f.write(f"    ry_gate_1 = cirq.ry({-theta})\n")
            f.write(f"    circuit.append(ry_gate_1(qubits[{i2}]))\n")
            f.write(f"    circuit.append(cirq.CZ(qubits[{i1}], qubits[{i2}]))\n")
            f.write(f"    ry_gate_2 = cirq.ry({theta})\n")
            f.write(f"    circuit.append(ry_gate_2(qubits[{i2}]))\n\n")

        # CX ladder
        for i in range(n - 1):
            i1 = n - 2 - i
            i2 = n - 1 - i
            f.write(f"    circuit.append(cirq.CX(qubits[{i1}], qubits[{i2}]))\n")

        f.write("\n    return circuit\n")


def generate_w_state_dataset(start_n=2, end_n=30):
    """Generate W state circuits for each qubit number and save them as Python files."""
    for n in range(start_n, end_n + 1):
        print(f"Generating for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_w_state_dataset()
