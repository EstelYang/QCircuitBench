import cirq
import math

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()

    circuit.append(cirq.X(qubits[3]))
    ry_gate_1 = cirq.ry(-1.0471975511965976)
    circuit.append(ry_gate_1(qubits[2]))
    circuit.append(cirq.CZ(qubits[3], qubits[2]))
    ry_gate_2 = cirq.ry(1.0471975511965976)
    circuit.append(ry_gate_2(qubits[2]))

    ry_gate_1 = cirq.ry(-0.9553166181245093)
    circuit.append(ry_gate_1(qubits[1]))
    circuit.append(cirq.CZ(qubits[2], qubits[1]))
    ry_gate_2 = cirq.ry(0.9553166181245093)
    circuit.append(ry_gate_2(qubits[1]))

    ry_gate_1 = cirq.ry(-0.7853981633974483)
    circuit.append(ry_gate_1(qubits[0]))
    circuit.append(cirq.CZ(qubits[1], qubits[0]))
    ry_gate_2 = cirq.ry(0.7853981633974483)
    circuit.append(ry_gate_2(qubits[0]))

    circuit.append(cirq.CX(qubits[2], qubits[3]))
    circuit.append(cirq.CX(qubits[1], qubits[2]))
    circuit.append(cirq.CX(qubits[0], qubits[1]))

    return circuit
