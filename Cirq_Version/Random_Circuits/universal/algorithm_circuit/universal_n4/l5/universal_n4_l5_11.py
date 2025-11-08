import cirq

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.CNOT(qubits[2], qubits[0]))
    circuit.append(cirq.S(qubits[3]))
    return circuit
