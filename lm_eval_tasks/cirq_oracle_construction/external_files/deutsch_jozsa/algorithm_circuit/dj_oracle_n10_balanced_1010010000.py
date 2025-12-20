import cirq

def oracle_circuit():
    n = 10
    qubits = cirq.LineQubit.range(n + 1)
    target = qubits[-1]
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], target))
    circuit.append(cirq.CNOT(qubits[2], target))
    circuit.append(cirq.CNOT(qubits[5], target))
    return circuit
