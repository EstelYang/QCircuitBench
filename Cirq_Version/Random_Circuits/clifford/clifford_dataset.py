import os
import random
import importlib.util
from typing import List, Tuple, Union

import cirq
import numpy as np


def _random_clifford_ops(n: int, l: int) -> List[Tuple]:
    """Return a list of ops encoded as tuples:
    ('h', q) | ('s', q) | ('cx', q0, q1), with indices in [0, n)."""
    ops: List[Tuple[Union[str, int], ...]] = []
    for _ in range(l):
        gate = random.choice(["h", "s", "cx"])
        if gate == "cx":
            q0, q1 = random.sample(range(n), 2)
            ops.append(("cx", q0, q1))
        else:
            q = random.randrange(n)
            ops.append((gate, q))
    return ops


def _save_statevector_txt(state: np.ndarray, txt_path: str) -> None:
    """Save a statevector to a text file in the specified format."""
    os.makedirs(os.path.dirname(txt_path), exist_ok=True)
    with open(txt_path, "w") as f:
        for amp in np.asarray(state, dtype=complex).ravel():
            f.write(f"({amp.real:.4f}{amp.imag:+.4f}j)\n")


def save_algorithm_py(n: int, l: int, i: int, root: str = "algorithm_circuit") -> str:
    """
    Save a Cirq-based random Clifford circuit as a Python module with algorithm()
    and write the matching final statevector to .txt (mandatory).
    """
    if n <= 0 or l < 0:
        raise ValueError("n must be > 0 and l must be >= 0")

    ops = _random_clifford_ops(n, l)

    dirpath = os.path.join(root, f"clifford_n{n}", f"l{l}")
    os.makedirs(dirpath, exist_ok=True)
    py_path = os.path.join(dirpath, f"clifford_n{n}_l{l}_{i}.py")
    txt_path = os.path.splitext(py_path)[0] + ".txt"

    with open(py_path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm():\n")
        f.write(f"    qubits = cirq.LineQubit.range({n})\n")
        f.write("    circuit = cirq.Circuit()\n")
        for op in ops:
            if op[0] == "h":
                f.write(f"    circuit.append(cirq.H(qubits[{op[1]}]))\n")
            elif op[0] == "s":
                f.write(f"    circuit.append(cirq.S(qubits[{op[1]}]))\n")
            elif op[0] == "cx":
                f.write(
                    f"    circuit.append(cirq.CNOT(qubits[{op[1]}], qubits[{op[2]}]))\n"
                )
        f.write("    return circuit\n")

    spec = importlib.util.spec_from_file_location("algo_mod", py_path)
    mod = importlib.util.module_from_spec(spec)
    assert spec.loader is not None, f"Failed loading module from {py_path}"
    spec.loader.exec_module(mod)

    simulator = cirq.Simulator()
    circuit = mod.algorithm()
    result = simulator.simulate(circuit)
    sv = np.asarray(result.final_state_vector, dtype=complex)
    _save_statevector_txt(sv, txt_path)

    return py_path


def generate_clifford_dataset(depth: int = 20, root: str = "algorithm_circuit"):
    """
    Generates Cirq Python modules and matching statevectors for random Clifford circuits.
    """
    for n in range(2, 13):
        for l in range(1, depth * n + 1):
            for i in range(3 * n):
                path = save_algorithm_py(n, l, i, root=root)
                print(f"[Saved] {path}")


if __name__ == "__main__":
    generate_clifford_dataset(depth=20)
