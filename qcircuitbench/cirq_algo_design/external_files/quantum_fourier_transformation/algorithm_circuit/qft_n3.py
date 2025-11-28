import cirq

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(3)
    circuit = cirq.Circuit()

    circuit.append(Oracle.on(*qubits))

    circuit.append(cirq.H(qubits[2]))
    cz_gate_0 = cirq.CZPowGate(exponent=0.25)
    circuit.append(cz_gate_0(qubits[0], qubits[2]))
    cz_gate_1 = cirq.CZPowGate(exponent=0.5)
    circuit.append(cz_gate_1(qubits[1], qubits[2]))
    circuit.append(cirq.H(qubits[1]))
    cz_gate_0 = cirq.CZPowGate(exponent=0.5)
    circuit.append(cz_gate_0(qubits[0], qubits[1]))
    circuit.append(cirq.H(qubits[0]))


    return circuit
