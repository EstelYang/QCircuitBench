import cirq

def oracle_circuit():
    qubits = cirq.LineQubit.range(6)
    circuit = cirq.Circuit()
    anc0 = qubits[3]
    anc1 = qubits[4]
    outq = qubits[5]
    circuit.append(cirq.CCX(anc0, anc1, outq))
    return circuit
