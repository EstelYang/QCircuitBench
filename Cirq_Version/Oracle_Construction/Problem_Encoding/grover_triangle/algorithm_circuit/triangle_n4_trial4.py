import cirq

def oracle_circuit():
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    anc0 = qubits[4]
    anc1 = qubits[5]
    outq = qubits[6]
    circuit.append(cirq.X.controlled(num_controls=3).on(qubits[0], qubits[1], anc0, anc1))
    circuit.append(cirq.CCX(qubits[0], qubits[1], anc0))
    circuit.append(cirq.X.controlled(num_controls=3).on(qubits[2], qubits[3], anc0, anc1))
    circuit.append(cirq.CCX(qubits[2], qubits[3], anc0))
    circuit.append(cirq.CCX(anc0, anc1, outq))
    circuit.append(cirq.CCX(qubits[2], qubits[3], anc0))
    circuit.append(cirq.X.controlled(num_controls=3).on(qubits[2], qubits[3], anc0, anc1))
    circuit.append(cirq.CCX(qubits[0], qubits[1], anc0))
    circuit.append(cirq.X.controlled(num_controls=3).on(qubits[0], qubits[1], anc0, anc1))
    return circuit
