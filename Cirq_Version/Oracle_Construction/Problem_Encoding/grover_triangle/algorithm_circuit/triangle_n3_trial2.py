import cirq

def oracle_circuit():
    qubits = cirq.LineQubit.range(6)
    circuit = cirq.Circuit()
    anc0 = qubits[3]
    anc1 = qubits[4]
    outq = qubits[5]
    circuit.append(cirq.X.controlled(num_controls=3).on(qubits[1], qubits[2], anc0, anc1))
    circuit.append(cirq.CCX(qubits[1], qubits[2], anc0))
    circuit.append(cirq.CCX(anc0, anc1, outq))
    circuit.append(cirq.CCX(qubits[1], qubits[2], anc0))
    circuit.append(cirq.X.controlled(num_controls=3).on(qubits[1], qubits[2], anc0, anc1))
    return circuit
