import cirq

def oracle_circuit():
    n = 10
    qubits = cirq.LineQubit.range(n + 1)
    target = qubits[-1]
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[1], target))
    circuit.append(cirq.CNOT(qubits[5], target))
    circuit.append(cirq.CNOT(qubits[6], target))
    return circuit
