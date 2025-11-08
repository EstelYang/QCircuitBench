import cirq

def algorithm():
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    circuit.append(cirq.S(qubits[5]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[5]))
    circuit.append(cirq.S(qubits[6]))
    circuit.append(cirq.S(qubits[3]))
    circuit.append(cirq.CNOT(qubits[1], qubits[6]))
    circuit.append(cirq.CNOT(qubits[3], qubits[5]))
    circuit.append(cirq.S(qubits[3]))
    circuit.append(cirq.S(qubits[3]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.S(qubits[5]))
    circuit.append(cirq.S(qubits[6]))
    return circuit
