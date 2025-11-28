import cirq

def oracle_circuit():
    n = 8
    qubits = cirq.LineQubit.range(2*n + 1)
    anc = qubits[2*n]
    circuit = cirq.Circuit()

    circuit.append(cirq.CNOT(qubits[0], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[9]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[3], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[4], qubits[12]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[5], qubits[13]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[6], qubits[14]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[7], qubits[15]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[0], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[0], qubits[9]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[0], qubits[12]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[0], qubits[13]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[0], qubits[15]).controlled_by(anc))
    circuit.append(cirq.X(anc))

    circuit.append(cirq.CNOT(qubits[0], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[9]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[3], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[4], qubits[12]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[5], qubits[13]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[6], qubits[14]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[7], qubits[15]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[0], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[0], qubits[14]).controlled_by(anc))
    circuit.append(cirq.X(qubits[9]))
    circuit.append(cirq.X(qubits[11]))

    return circuit
