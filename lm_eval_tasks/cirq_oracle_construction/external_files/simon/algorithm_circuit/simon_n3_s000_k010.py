import cirq

def oracle_circuit():
    n = 3
    qubits = cirq.LineQubit.range(2*n)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[3]))
    circuit.append(cirq.CNOT(qubits[1], qubits[4]))
    circuit.append(cirq.CNOT(qubits[2], qubits[5]))
    circuit.append(cirq.X(qubits[4]))
    return circuit
