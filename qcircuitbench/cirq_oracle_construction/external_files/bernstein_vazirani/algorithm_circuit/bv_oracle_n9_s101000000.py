import cirq

def oracle_circuit():
    n = 9
    qubits = cirq.LineQubit.range(n + 1)
    target = qubits[-1]
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], target))
    circuit.append(cirq.CNOT(qubits[2], target))
    return circuit
