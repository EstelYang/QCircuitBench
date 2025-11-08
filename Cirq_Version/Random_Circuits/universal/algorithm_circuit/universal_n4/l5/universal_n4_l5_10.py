import cirq

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()
    circuit.append(cirq.S(qubits[1]))
    circuit.append(cirq.CNOT(qubits[3], qubits[1]))
    circuit.append(cirq.T(qubits[1]))
    circuit.append(cirq.T(qubits[3]))
    circuit.append(cirq.S(qubits[3]))
    return circuit
