import cirq

def algorithm():
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[1], qubits[3]))
    circuit.append(cirq.S(qubits[3]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.CNOT(qubits[0], qubits[3]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.CNOT(qubits[0], qubits[2]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[6]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.S(qubits[0]))
    circuit.append(cirq.S(qubits[2]))
    circuit.append(cirq.H(qubits[3]))
    return circuit
