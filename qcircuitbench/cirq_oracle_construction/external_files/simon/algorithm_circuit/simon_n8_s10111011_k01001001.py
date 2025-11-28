import cirq

def oracle_circuit():
    n = 8
    qubits = cirq.LineQubit.range(2*n)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[8]))
    circuit.append(cirq.CNOT(qubits[1], qubits[9]))
    circuit.append(cirq.CNOT(qubits[2], qubits[10]))
    circuit.append(cirq.CNOT(qubits[3], qubits[11]))
    circuit.append(cirq.CNOT(qubits[4], qubits[12]))
    circuit.append(cirq.CNOT(qubits[5], qubits[13]))
    circuit.append(cirq.CNOT(qubits[6], qubits[14]))
    circuit.append(cirq.CNOT(qubits[7], qubits[15]))
    circuit.append(cirq.CNOT(qubits[0], qubits[8]))
    circuit.append(cirq.CNOT(qubits[0], qubits[10]))
    circuit.append(cirq.CNOT(qubits[0], qubits[11]))
    circuit.append(cirq.CNOT(qubits[0], qubits[12]))
    circuit.append(cirq.CNOT(qubits[0], qubits[14]))
    circuit.append(cirq.CNOT(qubits[0], qubits[15]))
    circuit.append(cirq.X(qubits[9]))
    circuit.append(cirq.X(qubits[12]))
    circuit.append(cirq.X(qubits[15]))
    return circuit
