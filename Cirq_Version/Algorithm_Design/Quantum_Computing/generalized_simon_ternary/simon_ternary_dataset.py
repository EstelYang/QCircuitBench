import os
import math


def save_algorithm_py(n: int):
    """Save a Cirq-based (ternary) Simon circuit for size n into a Python file."""
    os.makedirs("algorithm_circuit", exist_ok=True)
    file_path = f"./algorithm_circuit/ternary_simon_n{n}.py"

    anc_bits = math.ceil(math.log2(3 ** (n - 1)))  # cycles = 3**n / 3

    with open(file_path, "w") as f:
        f.write(
            "import math\n"
            "import numpy as np\n"
            "import cirq\n\n"
            "# --- 4x4 generalized Hadamard (base=3) embedded into 2-qubit space ---\n"
            "def gh() -> np.ndarray:\n"
            "    omega = np.exp(2 * np.pi * 1j / 3)\n"
            "    U = np.zeros((4, 4), dtype=complex)\n"
            "    for i in range(3):\n"
            "        for j in range(3):\n"
            "            U[i, j] = (omega ** (i * j)) / np.sqrt(3)\n"
            "    U[3, 3] = 1.0\n"
            "    return U\n\n"
            "GH = cirq.MatrixGate(gh())\n"
            "IGH = cirq.MatrixGate(np.conjugate(gh().T))  # inverse of GH\n\n"
            f"def algorithm(Oracle):\n"
            f"    # total qubits: 2*n (encoded input) + anc_bits (workspace)\n"
            f"    n = {n}\n"
            f"    anc_bits = {anc_bits}\n"
            f"    qubits = cirq.LineQubit.range(2*n + anc_bits)\n"
            f"    circuit = cirq.Circuit()\n\n"
            f"    # Apply GH on each 2-qubit block (n blocks total)\n"
            f"    for i in range(n):\n"
            f"        q0 = qubits[2*i]\n"
            f"        q1 = qubits[2*i + 1]\n"
            f"        circuit.append(GH.on(q0, q1))\n\n"
            f"    # Oracle over all qubits (2*n + anc_bits)\n"
            f"    circuit.append(Oracle.on(*qubits))\n\n"
            f"    # Apply IGH on each 2-qubit block (inverse generalized H)\n"
            f"    for i in range(n):\n"
            f"        q0 = qubits[2*i]\n"
            f"        q1 = qubits[2*i + 1]\n"
            f"        circuit.append(IGH.on(q0, q1))\n\n"
            f"    # Measure only the encoded input portion: 2*n qubits\n"
            f"    for i in range(2*n):\n"
            f"        circuit.append(cirq.measure(qubits[i], key=f'c{{i}}'))\n\n"
            f"    return circuit\n"
        )


def generate_ternary_simon_dataset(start_n=2, end_n=6):
    """Generate Cirq files for ternary Simon from n=start_n..end_n."""
    for n in range(start_n, end_n + 1):
        print(f"Generating ternary_simon_n{n}.py")
        save_algorithm_py(n)


if __name__ == '__main__':
    generate_ternary_simon_dataset()
