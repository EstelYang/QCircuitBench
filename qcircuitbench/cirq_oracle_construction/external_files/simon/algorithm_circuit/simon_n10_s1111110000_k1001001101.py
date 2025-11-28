import cirq

def oracle_circuit():
    n = 10
    qubits = cirq.LineQubit.range(2*n)
    circuit = cirq.Circuit()
    circuit.append(cirq.CNOT(qubits[0], qubits[10]))
    circuit.append(cirq.CNOT(qubits[1], qubits[11]))
    circuit.append(cirq.CNOT(qubits[2], qubits[12]))
    circuit.append(cirq.CNOT(qubits[3], qubits[13]))
    circuit.append(cirq.CNOT(qubits[4], qubits[14]))
    circuit.append(cirq.CNOT(qubits[5], qubits[15]))
    circuit.append(cirq.CNOT(qubits[6], qubits[16]))
    circuit.append(cirq.CNOT(qubits[7], qubits[17]))
    circuit.append(cirq.CNOT(qubits[8], qubits[18]))
    circuit.append(cirq.CNOT(qubits[9], qubits[19]))
    circuit.append(cirq.CNOT(qubits[0], qubits[10]))
    circuit.append(cirq.CNOT(qubits[0], qubits[11]))
    circuit.append(cirq.CNOT(qubits[0], qubits[12]))
    circuit.append(cirq.CNOT(qubits[0], qubits[13]))
    circuit.append(cirq.CNOT(qubits[0], qubits[14]))
    circuit.append(cirq.CNOT(qubits[0], qubits[15]))
    circuit.append(cirq.X(qubits[10]))
    circuit.append(cirq.X(qubits[13]))
    circuit.append(cirq.X(qubits[16]))
    circuit.append(cirq.X(qubits[17]))
    circuit.append(cirq.X(qubits[19]))
    return circuit
