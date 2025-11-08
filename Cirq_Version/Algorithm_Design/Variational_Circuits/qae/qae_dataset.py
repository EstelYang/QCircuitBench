import os

def save_algorithm_py():
    """Save the Cirq-based auto-encoder algorithm as a Python file."""
    out_dir = "algorithm_circuit"
    os.makedirs(out_dir, exist_ok=True)
    file_path = f"{out_dir}/auto_encoder_algorithm.py"

    with open(file_path, "w", encoding="utf-8") as f:
        f.write("import cirq\n")
        f.write("import sympy as sp\n\n\n")
        f.write("def algorithm(state_oracle, swap_test_oracle):\n")
        f.write("    q = cirq.LineQubit.range(8)\n")
        f.write("    c = cirq.Circuit()\n\n")
        f.write("    c.append(state_oracle.on(*q[:5]))\n\n")
        f.write("    num_qubits = 5\n")
        f.write("    reps = 5\n")
        f.write("    thetas = [sp.Symbol(f'theta_{i}') for i in range(num_qubits * (reps + 1))]\n")
        f.write("    it = iter(thetas)\n\n")
        f.write("    for i in range(num_qubits):\n")
        f.write("        c.append(cirq.ry(next(it)).on(q[i]))\n\n")
        f.write("    for _ in range(reps):\n")
        f.write("        for i in range(num_qubits - 1):\n")
        f.write("            c.append(cirq.CNOT(q[i], q[i + 1]))\n")
        f.write("        for i in range(num_qubits):\n")
        f.write("            c.append(cirq.ry(next(it)).on(q[i]))\n\n")
        f.write("    c.append(swap_test_oracle.on(*q))\n\n")
        f.write("    c.append(cirq.measure(q[7], key='c'))\n\n")
        f.write("    return c\n\n")

    print(f"✅ Saved: {file_path}")


if __name__ == "__main__":
    save_algorithm_py()
