import cirq

def oracle_circuit():
    n = 9
    qubits = cirq.LineQubit.range(2*n + 1)
    anc = qubits[2*n]
    circuit = cirq.Circuit()

    circuit.append(cirq.CNOT(qubits[0], qubits[9]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[3], qubits[12]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[4], qubits[13]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[5], qubits[14]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[6], qubits[15]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[7], qubits[16]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[8], qubits[17]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[13]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[14]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[16]).controlled_by(anc))
    circuit.append(cirq.X(anc))

    circuit.append(cirq.CNOT(qubits[0], qubits[9]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[3], qubits[12]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[4], qubits[13]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[5], qubits[14]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[6], qubits[15]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[7], qubits[16]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[8], qubits[17]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[12]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[14]).controlled_by(anc))
    circuit.append(cirq.X(qubits[11]))
    circuit.append(cirq.X(qubits[14]))
    circuit.append(cirq.X(qubits[15]))
    circuit.append(cirq.X(qubits[16]))

    return circuit
