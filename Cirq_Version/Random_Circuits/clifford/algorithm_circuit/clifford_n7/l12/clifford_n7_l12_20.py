import cirq

def algorithm():
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    circuit.append(cirq.H(qubits[5]))
    circuit.append(cirq.S(qubits[5]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.CNOT(qubits[2], qubits[5]))
    circuit.append(cirq.S(qubits[1]))
    circuit.append(cirq.S(qubits[1]))
    circuit.append(cirq.H(qubits[5]))
    circuit.append(cirq.CNOT(qubits[5], qubits[2]))
    circuit.append(cirq.S(qubits[2]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.S(qubits[1]))
    circuit.append(cirq.CNOT(qubits[5], qubits[1]))
    return circuit
