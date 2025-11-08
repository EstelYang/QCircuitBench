import os


def save_oracle_py():
    """Write the Sudoku Grover oracle as a Python file:
       ./algorithm_circuit/sudoku_oracle.py

    The file exports:
        def oracle_circuit() -> cirq.Circuit
    Layout (LineQubit indices):
        vars:   [0,1,2,3]
        output: [4]
        clauses:[5,6,7,8]
    Clauses (XORs): [0,1], [0,2], [1,3], [2,3]
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = "./algorithm_circuit/sudoku_oracle.py"

    with open(path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def oracle_circuit():\n")
        f.write('    """Sudoku Grover oracle (toy clause set).\n')
        f.write("    Qubits:\n")
        f.write("      vars   = q[0..3]\n")
        f.write("      output = q[4]\n")
        f.write("      clauses= q[5..8]\n")
        f.write(
            "    Clauses checked via XOR into clause ancillas, then MCX onto output, then uncompute.\n"
        )
        f.write('    """\n')
        f.write("    # Allocate 4 var qubits, 1 output, 4 clause ancillas\n")
        f.write("    qubits = cirq.LineQubit.range(9)\n")
        f.write("    var = qubits[0:4]\n")
        f.write("    out = qubits[4]\n")
        f.write("    clause = qubits[5:9]\n")
        f.write("    circuit = cirq.Circuit()\n\n")
        f.write("    # Clause list (pairs) to XOR into clause ancillas\n")
        f.write("    clauses = [(0,1), (0,2), (1,3), (2,3)]\n\n")
        f.write("    # Compute XORs: clause[i] = var[a] XOR var[b]\n")
        f.write("    for i, (a, b) in enumerate(clauses):\n")
        f.write("        circuit.append(cirq.CNOT(var[a], clause[i]))\n")
        f.write("        circuit.append(cirq.CNOT(var[b], clause[i]))\n\n")
        f.write("    # Flip output if ALL clause bits are 1 (multi-controlled X)\n")
        f.write(
            "    circuit.append(cirq.X.controlled(num_controls=4).on(*clause, out))\n\n"
        )
        f.write("    # Uncompute clause ancillas (restore to |0>)\n")
        f.write("    for i, (a, b) in enumerate(clauses):\n")
        f.write("        circuit.append(cirq.CNOT(var[b], clause[i]))\n")
        f.write("        circuit.append(cirq.CNOT(var[a], clause[i]))\n\n")
        f.write("    return circuit\n\n")
        f.write("if __name__ == '__main__':\n")
        f.write("    # Quick smoke test (no measurements required)\n")
        f.write("    sim = cirq.Simulator()\n")
        f.write("    _ = sim.simulate(oracle_circuit())\n")
        f.write("    print('Oracle circuit built and simulated successfully.')\n")


def generate_circuit_py():
    """Generates the Sudoku oracle Python file."""
    print("Generating Sudoku oracle file...")
    save_oracle_py()
    print("Saved to ./algorithm_circuit/sudoku_oracle.py")


if __name__ == "__main__":
    generate_circuit_py()
