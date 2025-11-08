import cirq

def diffuser_circuit():
    qubits = cirq.LineQubit.range(2)
    circuit = cirq.Circuit()
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.X.controlled(num_controls=1).on(*qubits))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    return circuit
