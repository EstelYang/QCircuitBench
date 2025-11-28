import cirq

def oracle_circuit():
    n = 9
    qubits = cirq.LineQubit.range(n)
    circuit = cirq.Circuit()
    circuit.append(cirq.X(qubits[2]))
    circuit.append(cirq.X(qubits[5]))
    circuit.append(cirq.X(qubits[6]))
    circuit.append(cirq.X(qubits[7]))
    circuit.append(cirq.Z.controlled(num_controls=n-1).on(*qubits))
    circuit.append(cirq.X(qubits[2]))
    circuit.append(cirq.X(qubits[5]))
    circuit.append(cirq.X(qubits[6]))
    circuit.append(cirq.X(qubits[7]))
    return circuit
