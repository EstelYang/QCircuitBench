import cirq

def oracle_circuit():
    n = 2
    qubits = cirq.LineQubit.range(2*n)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[2]))
    circuit.append(cirq.CNOT(qubits[1], qubits[3]))
    circuit.append(cirq.X(qubits[2]))
    return circuit
