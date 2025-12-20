import math
import numpy as np
import cirq


# --- 4x4 generalized Hadamard (base=3) embedded into 2-qubit space ---
def gh() -> np.ndarray:
    omega = np.exp(2 * np.pi * 1j / 3)
    U = np.zeros((4, 4), dtype=complex)
    for i in range(3):
        for j in range(3):
            U[i, j] = (omega ** (i * j)) / np.sqrt(3)
    U[3, 3] = 1.0
    return U


GH = cirq.MatrixGate(gh())
IGH = cirq.MatrixGate(np.conjugate(gh().T))  # inverse of GH


def algorithm(Oracle):
    # total qubits: 2*n (encoded input) + anc_bits (workspace)
    n = 2
    anc_bits = 2
    qubits = cirq.LineQubit.range(2 * n + anc_bits)
    circuit = cirq.Circuit()

    # Apply GH on each 2-qubit block (n blocks total)
    for i in range(n):
        q0 = qubits[2 * i]
        q1 = qubits[2 * i + 1]
        circuit.append(GH.on(q0, q1))

    # Oracle over all qubits (2*n + anc_bits)
    circuit.append(Oracle.on(*qubits))

    # Apply IGH on each 2-qubit block (inverse generalized H)
    for i in range(n):
        q0 = qubits[2 * i]
        q1 = qubits[2 * i + 1]
        circuit.append(IGH.on(q0, q1))

    # Measure only the encoded input portion: 2*n qubits
    for i in range(2 * n):
        circuit.append(cirq.measure(qubits[i], key=f'c{i}'))

    return circuit
