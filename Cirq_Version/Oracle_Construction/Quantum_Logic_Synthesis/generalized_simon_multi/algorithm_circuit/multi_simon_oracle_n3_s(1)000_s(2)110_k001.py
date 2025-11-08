import cirq

def oracle_circuit():
    n = 3
    qubits = cirq.LineQubit.range(2*n + 1)
    anc = qubits[2*n]
    circuit = cirq.Circuit()

    circuit.append(cirq.CNOT(qubits[0], qubits[3]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[4]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[5]).controlled_by(anc))
    # s1 is all zeros: only controlled copy was applied
    circuit.append(cirq.X(anc))

    circuit.append(cirq.CNOT(qubits[0], qubits[3]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[4]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[2], qubits[5]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[4]).controlled_by(anc))
    circuit.append(cirq.CNOT(qubits[1], qubits[5]).controlled_by(anc))
    circuit.append(cirq.X(qubits[3]))

    return circuit
