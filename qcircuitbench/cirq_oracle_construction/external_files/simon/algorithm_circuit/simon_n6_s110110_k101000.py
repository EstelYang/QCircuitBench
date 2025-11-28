import cirq

def oracle_circuit():
    n = 6
    qubits = cirq.LineQubit.range(2*n)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[6]))
    circuit.append(cirq.CNOT(qubits[1], qubits[7]))
    circuit.append(cirq.CNOT(qubits[2], qubits[8]))
    circuit.append(cirq.CNOT(qubits[3], qubits[9]))
    circuit.append(cirq.CNOT(qubits[4], qubits[10]))
    circuit.append(cirq.CNOT(qubits[5], qubits[11]))
    circuit.append(cirq.CNOT(qubits[0], qubits[6]))
    circuit.append(cirq.CNOT(qubits[0], qubits[7]))
    circuit.append(cirq.CNOT(qubits[0], qubits[9]))
    circuit.append(cirq.CNOT(qubits[0], qubits[10]))
    circuit.append(cirq.X(qubits[6]))
    circuit.append(cirq.X(qubits[8]))
    return circuit
