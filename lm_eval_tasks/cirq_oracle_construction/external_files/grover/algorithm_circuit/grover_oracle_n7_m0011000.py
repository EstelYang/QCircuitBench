import cirq

def oracle_circuit():
    n = 7
    qubits = cirq.LineQubit.range(n)
    circuit = cirq.Circuit()
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.X(qubits[4]))
    circuit.append(cirq.X(qubits[5]))
    circuit.append(cirq.X(qubits[6]))
    circuit.append(cirq.Z.controlled(num_controls=n-1).on(*qubits))
    circuit.append(cirq.X(qubits[0]))
    circuit.append(cirq.X(qubits[1]))
    circuit.append(cirq.X(qubits[4]))
    circuit.append(cirq.X(qubits[5]))
    circuit.append(cirq.X(qubits[6]))
    return circuit
