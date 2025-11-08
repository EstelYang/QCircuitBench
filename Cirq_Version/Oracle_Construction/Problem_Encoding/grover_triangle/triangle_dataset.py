import os
import random
from typing import List, Tuple


CASE_NUM = 5
N_NUM = 15


def generate_edges(node_num: int) -> List[Tuple[int, int]]:
    """Randomly generate an undirected edge set over nodes [0..node_num-1]."""
    edges = []
    for i in range(node_num):
        for j in range(i + 1, node_num):
            if random.choice([True, False]):
                edges.append((i, j))
    return edges


def _write_oracle_py(n: int, trial_idx: int, edges: List[Tuple[int, int]]):
    """
    Write an explicit, loop-free Cirq oracle file for triangle detection.
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    out_path = f"./algorithm_circuit/triangle_n{n}_trial{trial_idx}.py"
    qubit_num = n + 3  # n nodes + 2 ancillas + 1 output

    with open(out_path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def oracle_circuit():\n")
        f.write(f"    qubits = cirq.LineQubit.range({qubit_num})\n")
        f.write("    circuit = cirq.Circuit()\n")
        f.write(f"    anc0 = qubits[{n}]\n")
        f.write(f"    anc1 = qubits[{n+1}]\n")
        f.write(f"    outq = qubits[{n+2}]\n")

        # --- Forward compute (Adder for each edge) ---
        for u, v in edges:
            f.write(
                f"    circuit.append(cirq.X.controlled(num_controls=3).on("
                f"qubits[{u}], qubits[{v}], anc0, anc1))\n"
            )
            f.write(f"    circuit.append(cirq.CCX(qubits[{u}], qubits[{v}], anc0))\n")

        # --- Mark output ---
        f.write("    circuit.append(cirq.CCX(anc0, anc1, outq))\n")

        # --- Uncompute (Reverse_Adder per edge, reverse order) ---
        for u, v in reversed(edges):
            f.write(f"    circuit.append(cirq.CCX(qubits[{u}], qubits[{v}], anc0))\n")
            f.write(
                f"    circuit.append(cirq.X.controlled(num_controls=3).on("
                f"qubits[{u}], qubits[{v}], anc0, anc1))\n"
            )

        f.write("    return circuit\n")


def _write_info(n: int, trial_idx: int, edges: List[Tuple[int, int]]):
    os.makedirs(f"txt_info/triangle_n{n}", exist_ok=True)
    with open(f"triangle_n{n}/info_trial{trial_idx}.txt", "w") as f:
        f.write(f"Edge list: {edges}")


def generate_triangle_py():
    """Generate triangle-oracle Cirq python files with explicit gates."""
    for n in range(3, N_NUM):
        print(f"[n={n}] generating {CASE_NUM} cases...")
        for i in range(CASE_NUM):
            edges = generate_edges(n)
            _write_oracle_py(n, i, edges)
            _write_info(n, i, edges)


def main():
    generate_triangle_py()


if __name__ == "__main__":
    main()
