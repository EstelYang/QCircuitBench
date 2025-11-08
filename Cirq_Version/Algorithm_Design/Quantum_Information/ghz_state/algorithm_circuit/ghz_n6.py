import cirq

def algorithm():
    qubits = cirq.LineQubit.range(6)
    circuit = cirq.Circuit()

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.CNOT(qubits[0], qubits[1]))
    circuit.append(cirq.CNOT(qubits[0], qubits[2]))
    circuit.append(cirq.CNOT(qubits[0], qubits[3]))
    circuit.append(cirq.CNOT(qubits[0], qubits[4]))
    circuit.append(cirq.CNOT(qubits[0], qubits[5]))

    return circuit
