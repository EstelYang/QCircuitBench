import cirq

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()
    circuit.append(cirq.T(qubits[3]))
    circuit.append(cirq.CNOT(qubits[2], qubits[0]))
    circuit.append(cirq.S(qubits[2]))
    circuit.append(cirq.CNOT(qubits[2], qubits[3]))
    circuit.append(cirq.S(qubits[1]))
    return circuit
