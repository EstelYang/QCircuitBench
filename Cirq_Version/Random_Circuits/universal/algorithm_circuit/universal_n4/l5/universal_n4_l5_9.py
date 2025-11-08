import cirq

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()
    circuit.append(cirq.T(qubits[3]))
    circuit.append(cirq.T(qubits[2]))
    circuit.append(cirq.T(qubits[2]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[3]))
    return circuit
