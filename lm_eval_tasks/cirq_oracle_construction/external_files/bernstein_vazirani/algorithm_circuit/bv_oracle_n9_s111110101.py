import cirq

def oracle_circuit():
    n = 9
    qubits = cirq.LineQubit.range(n + 1)
    target = qubits[-1]
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], target))
    circuit.append(cirq.CNOT(qubits[1], target))
    circuit.append(cirq.CNOT(qubits[2], target))
    circuit.append(cirq.CNOT(qubits[3], target))
    circuit.append(cirq.CNOT(qubits[4], target))
    circuit.append(cirq.CNOT(qubits[6], target))
    circuit.append(cirq.CNOT(qubits[8], target))
    return circuit
