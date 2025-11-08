import cirq

def algorithm():
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[3]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.S(qubits[3]))
    circuit.append(cirq.S(qubits[3]))
    return circuit
