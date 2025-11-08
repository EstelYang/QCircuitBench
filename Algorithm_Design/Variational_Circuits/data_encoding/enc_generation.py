import math
from qiskit import QuantumCircuit


def basis_encoding_3q_superposition() -> QuantumCircuit:
    desired_state = [
        0,
        0,
        0,
        0,
        0,
        1 / math.sqrt(2),
        0,
        1 / math.sqrt(2)]

    qc = QuantumCircuit(3, name="basis_encoding")
    qc.initialize(desired_state, [0, 1, 2])
    return qc.decompose().decompose().decompose().decompose().decompose()


def amplitude_encoding_2q() -> QuantumCircuit:
    desired_state = [
        1 / math.sqrt(15.25) * 1.5,
        0,
        1 / math.sqrt(15.25) * -2,
        1 / math.sqrt(15.25) * 3]

    qc = QuantumCircuit(2, name="amplitude_encoding")
    qc.initialize(desired_state, [0, 1])

    return qc.decompose().decompose().decompose().decompose().decompose()


def angle_encoding_3q() -> QuantumCircuit:
    qc = QuantumCircuit(3, name="angle_encoding")
    qc.ry(0.0, 0)
    qc.ry(math.pi / 2, 1)
    qc.ry(math.pi, 2)
    return qc
