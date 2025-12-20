import cirq

def oracle_circuit():
    n = 4
    qubits = cirq.LineQubit.range(2*n)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[4]))
    circuit.append(cirq.CNOT(qubits[1], qubits[5]))
    circuit.append(cirq.CNOT(qubits[2], qubits[6]))
    circuit.append(cirq.CNOT(qubits[3], qubits[7]))
    circuit.append(cirq.CNOT(qubits[3], qubits[7]))
    circuit.append(cirq.X(qubits[4]))
    circuit.append(cirq.X(qubits[5]))
    circuit.append(cirq.X(qubits[6]))
    return circuit
