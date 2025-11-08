import os
import random


def _save_oracle_py(n: int, marked: str):
    """Create ./algorithm_circuit/grover_oracle_n{n}_m{marked}.py"""
    path = f"./algorithm_circuit/grover_oracle_n{n}_m{marked}.py"

    zeros = [i for i, b in enumerate(marked) if b == "0"]  # open-controls
    with open(path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def oracle_circuit():\n")
        f.write(f"    n = {n}\n")
        f.write("    qubits = cirq.LineQubit.range(n)\n")
        f.write("    circuit = cirq.Circuit()\n")
        # Pre X on zero-positions (explicit lines)
        for i in zeros:
            f.write(f"    circuit.append(cirq.X(qubits[{i}]))\n")
        # (n-1)-controlled Z targeting the last qubit (controls are qubits[0..n-2])
        f.write("    circuit.append(cirq.Z.controlled(num_controls=n-1).on(*qubits))\n")
        # Post X to undo open-controls (explicit lines)
        for i in zeros:
            f.write(f"    circuit.append(cirq.X(qubits[{i}]))\n")
        f.write("    return circuit\n")


def _generate_marked_items(n: int):
    """Generate 2^(n-2) marked bitstrings."""
    k = 2 ** (n - 2)
    s = set()
    while len(s) < k:
        s.add("".join(random.choice("01") for _ in range(n)))
    return list(s)


def generate_oracle_py_files(start_n=2, end_n=10):
    """Generate Grover oracle python circuits with explicit gate lines."""
    os.makedirs("algorithm_circuit", exist_ok=True)
    for n in range(start_n, end_n + 1):
        print(f"Generating Grover oracles for n={n}")
        for m in _generate_marked_items(n):
            _save_oracle_py(n, m)


if __name__ == "__main__":
    generate_oracle_py_files()
