import cirq

def algorithm():
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    circuit.append(cirq.S(qubits[5]))
    circuit.append(cirq.CNOT(qubits[0], qubits[4]))
    circuit.append(cirq.CNOT(qubits[1], qubits[4]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.S(qubits[6]))
    circuit.append(cirq.CNOT(qubits[0], qubits[1]))
    circuit.append(cirq.S(qubits[4]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.S(qubits[2]))
    circuit.append(cirq.CNOT(qubits[5], qubits[3]))
    circuit.append(cirq.S(qubits[2]))
    return circuit
