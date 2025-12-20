import cirq

def oracle_circuit():
    n = 8
    qubits = cirq.LineQubit.range(n + 1)
    target = qubits[-1]
    circuit = cirq.Circuit()
    circuit.append(cirq.I(target))
    return circuit
