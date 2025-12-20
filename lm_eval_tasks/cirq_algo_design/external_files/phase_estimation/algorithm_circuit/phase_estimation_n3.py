import cirq
import numpy as np


def inverse_qft(qubits):
    circuit = cirq.Circuit()
    circuit.append(cirq.SWAP(qubits[0], qubits[2]))

    circuit.append(cirq.H(qubits[0]))
    angle = -np.pi / 2 ** (1 - 0)
    cz_gate = cirq.CZPowGate(exponent=angle / np.pi)
    circuit.append(cz_gate.on(qubits[0], qubits[1]))
    circuit.append(cirq.H(qubits[1]))
    angle = -np.pi / 2 ** (2 - 0)
    cz_gate = cirq.CZPowGate(exponent=angle / np.pi)
    circuit.append(cz_gate.on(qubits[0], qubits[2]))
    angle = -np.pi / 2 ** (2 - 1)
    cz_gate = cirq.CZPowGate(exponent=angle / np.pi)
    circuit.append(cz_gate.on(qubits[1], qubits[2]))
    circuit.append(cirq.H(qubits[2]))
    return circuit


def algorithm(cu_gate, psi_gate):
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()

    circuit.append(psi_gate.on(qubits[-1]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append((cu_gate ** (2 ** 0)).on(qubits[0], qubits[3]))
    circuit.append((cu_gate ** (2 ** 1)).on(qubits[1], qubits[3]))
    circuit.append((cu_gate ** (2 ** 2)).on(qubits[2], qubits[3]))
    circuit.append(inverse_qft(qubits[:3]))
    circuit.append(cirq.measure(qubits[0], key='c0'))
    circuit.append(cirq.measure(qubits[1], key='c1'))
    circuit.append(cirq.measure(qubits[2], key='c2'))
    return circuit
