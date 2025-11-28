import cirq

def oracle_circuit():
    n = 3
    qubits = cirq.LineQubit.range(n)
    circuit = cirq.Circuit()
    circuit.append(cirq.Z.controlled(num_controls=n-1).on(*qubits))
    return circuit
