# su2_cirq.py
import os
import math
import sympy as sp
import cirq
from typing import List, Tuple


def rotation(c: cirq.Circuit, q: cirq.Qid, theta, phi, lambd):
    """
    Qiskit U(theta, phi, lambda) = RZ(phi) RY(theta) RZ(lambda)（差一个全局相位无关）
    """
    c.append(cirq.rz(phi).on(q))
    c.append(cirq.ry(theta).on(q))
    c.append(cirq.rz(lambd).on(q))


def ladderCNOT(c: cirq.Circuit, qubits: List[cirq.Qid]):
    for i in range(len(qubits) - 1):
        c.append(cirq.CNOT(qubits[i], qubits[i + 1]))


def fullCNOT(c: cirq.Circuit, qubits: List[cirq.Qid]):
    for i in range(len(qubits)):
        for j in range(i + 1, len(qubits)):
            c.append(cirq.CNOT(qubits[i], qubits[j]))


def reverse_linearCNOT(c: cirq.Circuit, qubits: List[cirq.Qid]):
    for i in range(len(qubits) - 1, 0, -1):
        c.append(cirq.CNOT(qubits[i], qubits[i - 1]))


def circularCNOT(c: cirq.Circuit, qubits: List[cirq.Qid]):
    c.append(cirq.CNOT(qubits[-1], qubits[0]))
    for i in range(len(qubits) - 1):
        c.append(cirq.CNOT(qubits[i], qubits[i + 1]))


def efficient_su2(n: int, num_layers: int, mode: str) -> Tuple[cirq.Circuit, List[sp.Symbol]]:
    q = cirq.LineQubit.range(n)
    c = cirq.Circuit()
    params: List[sp.Symbol] = []
    idxcnt = 0

    for l in range(num_layers + 1):
        for i in range(n):
            theta = sp.Symbol(f"theta_{idxcnt}")
            phi = sp.Symbol(f"phi_{idxcnt}")
            lambd = sp.Symbol(f"lambda_{idxcnt}")
            rotation(c, q[i], theta, phi, lambd)
            params.extend([theta, phi, lambd])
            idxcnt += 1

        if l == num_layers:
            continue

        if mode == "ladderCNOT":
            ladderCNOT(c, q)
        elif mode == "fullCNOT":
            fullCNOT(c, q)
        elif mode == "reverse_linearCNOT":
            reverse_linearCNOT(c, q)
        elif mode == "circularCNOT":
            circularCNOT(c, q)
        else:
            raise ValueError(f"Unknown entanglement mode: {mode}")

    return c, params


def save_su2_py(n: int, num_layers: int, mode: str, out_dir: str = "algorithm_circuit") -> str:
    os.makedirs(out_dir, exist_ok=True)
    path = os.path.join(out_dir, f"efficient_su2_n{n}_l{num_layers}_{mode}.py")
    with open(path, "w", encoding="utf-8") as f:
        f.write("import sympy as sp\n")
        f.write("import cirq\n\n")
        f.write("def algorithm():\n")
        f.write(f"    q = cirq.LineQubit.range({n})\n")
        f.write("    c = cirq.Circuit()\n")
        idxcnt = 0
        for l in range(num_layers + 1):
            for i in range(n):
                f.write(f"    theta_{idxcnt} = sp.Symbol('theta_{idxcnt}')\n")
                f.write(f"    phi_{idxcnt} = sp.Symbol('phi_{idxcnt}')\n")
                f.write(f"    lambda_{idxcnt} = sp.Symbol('lambda_{idxcnt}')\n")
                f.write(f"    c.append(cirq.rz(phi_{idxcnt}).on(q[{i}]))\n")
                f.write(f"    c.append(cirq.ry(theta_{idxcnt}).on(q[{i}]))\n")
                f.write(f"    c.append(cirq.rz(lambda_{idxcnt}).on(q[{i}]))\n")
                idxcnt += 1

            if l == num_layers:
                continue

            if mode == "ladderCNOT":
                for i in range(n - 1):
                    f.write(f"    c.append(cirq.CNOT(q[{i}], q[{i + 1}]))\n")
            elif mode == "fullCNOT":
                for i in range(n):
                    for j in range(i + 1, n):
                        f.write(f"    c.append(cirq.CNOT(q[{i}], q[{j}]))\n")
            elif mode == "reverse_linearCNOT":
                for i in range(n - 1, 0, -1):
                    f.write(f"    c.append(cirq.CNOT(q[{i}], q[{i - 1}]))\n")
            elif mode == "circularCNOT":
                f.write(f"    c.append(cirq.CNOT(q[{n - 1}], q[0]))\n")
                for i in range(n - 1):
                    f.write(f"    c.append(cirq.CNOT(q[{i}], q[{i + 1}]))\n")
            else:
                f.write("    raise ValueError('Unknown entanglement mode')\n")

    return path


if __name__ == "__main__":
    for n in range(2, 5):
        for l in range(1, 4):
            save_su2_py(n, l, 'fullCNOT')
