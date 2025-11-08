import cirq

def algorithm():
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[2]))
    circuit.append(cirq.H(qubits[5]))
    circuit.append(cirq.S(qubits[4]))
    circuit.append(cirq.CNOT(qubits[2], qubits[3]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.CNOT(qubits[6], qubits[5]))
    circuit.append(cirq.CNOT(qubits[3], qubits[1]))
    circuit.append(cirq.H(qubits[6]))
    circuit.append(cirq.CNOT(qubits[5], qubits[1]))
    circuit.append(cirq.CNOT(qubits[5], qubits[3]))
    circuit.append(cirq.CNOT(qubits[2], qubits[5]))
    circuit.append(cirq.S(qubits[0]))
    return circuit
