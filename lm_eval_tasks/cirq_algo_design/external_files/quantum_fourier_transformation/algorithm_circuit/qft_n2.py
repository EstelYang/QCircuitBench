import cirq

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(2)
    circuit = cirq.Circuit()

    circuit.append(Oracle.on(*qubits))

    circuit.append(cirq.H(qubits[1]))
    cz_gate_0 = cirq.CZPowGate(exponent=0.5)
    circuit.append(cz_gate_0(qubits[0], qubits[1]))
    circuit.append(cirq.H(qubits[0]))


    return circuit
