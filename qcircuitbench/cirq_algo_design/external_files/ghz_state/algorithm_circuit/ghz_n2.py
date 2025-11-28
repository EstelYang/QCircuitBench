import cirq

def algorithm():
    qubits = cirq.LineQubit.range(2)
    circuit = cirq.Circuit()

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.CNOT(qubits[0], qubits[1]))

    return circuit
