import cirq

def oracle_circuit():
    n = 6
    qubits = cirq.LineQubit.range(2*n + 1)
    anc = qubits[2*n]
    circuit = cirq.Circuit()

    circuit.append(cirq.CNOT(qubits[0], qubits[6]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[7]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[3], qubits[9]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[4], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[5], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[11]).controlled_by(anc))
    circuit.append(cirq.X(anc))

    circuit.append(cirq.CNOT(qubits[0], qubits[6]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[7]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[3], qubits[9]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[4], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[5], qubits[11]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[8]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[10]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[11]).controlled_by(anc))
    circuit.append(cirq.X(qubits[9]))
    circuit.append(cirq.X(qubits[11]))

    return circuit
