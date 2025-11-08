import cirq

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[2], qubits[0]))
    circuit.append(cirq.CNOT(qubits[1], qubits[2]))
    circuit.append(cirq.CNOT(qubits[0], qubits[1]))
    circuit.append(cirq.T(qubits[3]))
    circuit.append(cirq.CNOT(qubits[0], qubits[2]))
    return circuit
