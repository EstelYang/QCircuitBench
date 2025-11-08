import os

def save_algorithm_py():
    """Save the Cirq-based QAOA MaxCut algorithm as a Python file."""
    out_dir = "algorithm_circuit"
    os.makedirs(out_dir, exist_ok=True)
    file_path = f"{out_dir}/qaoa_maxcut_algorithm.py"

    with open(file_path, "w", encoding="utf-8") as f:
        f.write("import cirq\n")
        f.write("import sympy as sp\n")
        f.write("from typing import Dict\n\n\n")
        f.write("def algorithm(graph):\n")
        f.write("    nodes = list(graph.nodes())\n")
        f.write("    nqubits = len(nodes)\n")
        f.write("    node_index: Dict = {node: i for i, node in enumerate(nodes)}\n\n")
        f.write("    q = cirq.LineQubit.range(nqubits)\n")
        f.write("    c = cirq.Circuit()\n\n")
        f.write("    beta = [sp.Symbol(f'beta_{i}') for i in range(3)]\n")
        f.write("    gamma = [sp.Symbol(f'gamma_{i}') for i in range(3)]\n\n")
        f.write("    c.append(cirq.H.on_each(*q))\n\n")
        f.write("    for l in range(3):\n")
        f.write("        for (u, v) in graph.edges():\n")
        f.write("            a = node_index[u]\n")
        f.write("            b = node_index[v]\n")
        f.write("            c.append(cirq.CNOT(q[a], q[b]))\n")
        f.write("            c.append(cirq.rz(2 * gamma[l]).on(q[b]))\n")
        f.write("            c.append(cirq.CNOT(q[a], q[b]))\n")
        f.write("        for i in range(nqubits):\n")
        f.write("            c.append(cirq.rx(2 * beta[l]).on(q[i]))\n\n")
        f.write("    c.append(cirq.measure(*q, key='m'))\n\n")
        f.write("    return c\n\n")

    print(f"✅ Saved: {file_path}")


if __name__ == '__main__':
    save_algorithm_py()
