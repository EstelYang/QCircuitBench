import cirq

def oracle_circuit():
    n = 4
    qubits = cirq.LineQubit.range(n + 1)
    target = qubits[-1]
    circuit = cirq.Circuit()
    circuit.append(cirq.X(target))
    return circuit
