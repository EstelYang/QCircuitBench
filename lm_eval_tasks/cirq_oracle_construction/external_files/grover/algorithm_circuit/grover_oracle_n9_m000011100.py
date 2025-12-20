import cirq

def oracle_circuit():
    n = 9
    qubits = cirq.LineQubit.range(n)
    circuit = cirq.Circuit()
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.X(qubits[2]))
    circuit.append(cirq.X(qubits[3]))
    circuit.append(cirq.X(qubits[7]))
    circuit.append(cirq.X(qubits[8]))
    circuit.append(cirq.Z.controlled(num_controls=n-1).on(*qubits))
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.X(qubits[2]))
    circuit.append(cirq.X(qubits[3]))
    circuit.append(cirq.X(qubits[7]))
    circuit.append(cirq.X(qubits[8]))
    return circuit
