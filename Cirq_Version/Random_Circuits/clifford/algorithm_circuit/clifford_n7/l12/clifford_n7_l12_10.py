import cirq

def algorithm():
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[5]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.S(qubits[1]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.S(qubits[6]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.S(qubits[3]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[6]))
    circuit.append(cirq.CNOT(qubits[4], qubits[6]))
    circuit.append(cirq.S(qubits[2]))
    return circuit
