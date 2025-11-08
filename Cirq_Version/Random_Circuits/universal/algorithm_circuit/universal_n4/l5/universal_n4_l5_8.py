import cirq

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()
    circuit.append(cirq.T(qubits[2]))
    circuit.append(cirq.CNOT(qubits[1], qubits[2]))
    circuit.append(cirq.T(qubits[2]))
    circuit.append(cirq.CNOT(qubits[3], qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    return circuit
