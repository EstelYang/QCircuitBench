import cirq

def algorithm():
    qubits = cirq.LineQubit.range(3)
    circuit = cirq.Circuit()
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.T(qubits[2]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.T(qubits[1]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.CNOT(qubits[2], qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.S(qubits[1]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.CNOT(qubits[1], qubits[0]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.T(qubits[0]))
    circuit.append(cirq.CNOT(qubits[0], qubits[2]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.CNOT(qubits[0], qubits[2]))
    circuit.append(cirq.T(qubits[0]))
    circuit.append(cirq.CNOT(qubits[2], qubits[1]))
    return circuit
