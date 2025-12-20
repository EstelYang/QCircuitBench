import cirq

def oracle_circuit():
    n = 10
    qubits = cirq.LineQubit.range(n)
    circuit = cirq.Circuit()
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.X(qubits[4]))
    circuit.append(cirq.X(qubits[6]))
    circuit.append(cirq.X(qubits[7]))
    circuit.append(cirq.X(qubits[8]))
    circuit.append(cirq.X(qubits[9]))
    circuit.append(cirq.Z.controlled(num_controls=n-1).on(*qubits))
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.X(qubits[4]))
    circuit.append(cirq.X(qubits[6]))
    circuit.append(cirq.X(qubits[7]))
    circuit.append(cirq.X(qubits[8]))
    circuit.append(cirq.X(qubits[9]))
    return circuit
