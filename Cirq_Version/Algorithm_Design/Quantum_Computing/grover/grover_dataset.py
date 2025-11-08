import os
import math


def save_algorithm_py(n: int):
    """Write a per-n Grover algorithm file: ./algorithm_circuit/grover_n{n}.py

    The file exports:
        def algorithm(Oracle): -> cirq.Circuit
    where `Oracle` is a cirq.Gate from grover_oracle.py with arity n.
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = f"./algorithm_circuit/grover_n{n}.py"

    with open(path, "w") as f:
        f.write("import math\n")
        f.write("import cirq\n\n")
        f.write("def _diffuser(qubits):\n")
        f.write('    """Grover diffuser on `qubits` (size n).\n')
        f.write(
            "    Implements H^n · X^n · H(target) · MCX(controls->target) · H(target) · X^n · H^n.\n"
        )
        f.write('    """\n')
        f.write("    n = len(qubits)\n")
        f.write("    ops = []\n")
        f.write("    # H on all\n")
        f.write("    ops += [cirq.H(q) for q in qubits]\n")
        f.write("    # X on all\n")
        f.write("    ops += [cirq.X(q) for q in qubits]\n")
        f.write("    # Multi-controlled X targeting the last qubit, with H wrappers\n")
        f.write("    ops.append(cirq.H(qubits[-1]))\n")
        f.write("    ops.append(cirq.X.controlled(num_controls=n-1).on(*qubits))\n")
        f.write("    ops.append(cirq.H(qubits[-1]))\n")
        f.write("    # Undo X and H on all\n")
        f.write("    ops += [cirq.X(q) for q in qubits]\n")
        f.write("    ops += [cirq.H(q) for q in qubits]\n")
        f.write("    return ops\n\n")

        f.write("def algorithm(Oracle):\n")
        f.write(f"    qubits = cirq.LineQubit.range({n})\n")
        f.write("    circuit = cirq.Circuit()\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")
        f.write("\n")
        f.write(f"    num_iterations = math.floor(math.pi / 4 * math.sqrt(2**{n}))\n")
        f.write("    for _ in range(num_iterations):\n")
        f.write("        # Phase oracle for the marked state\n")
        f.write("        circuit.append(Oracle.on(*qubits))\n")
        f.write("        # Diffusion operator\n")
        f.write("        circuit.append(_diffuser(qubits))\n\n")
        f.write("    # Measure all qubits\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.measure(qubits[{i}], key='c{i}'))\n")
        f.write("\n")
        f.write("    return circuit\n")


def generate_grover_dataset(start_n=2, end_n=14):
    for n in range(start_n, end_n + 1):
        print(f"Generating Grover algorithm file for n={n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_grover_dataset()
