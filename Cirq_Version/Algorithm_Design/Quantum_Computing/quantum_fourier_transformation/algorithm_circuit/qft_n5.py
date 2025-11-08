import cirq


def algorithm(Oracle):
    qubits = cirq.LineQubit.range(5)
    circuit = cirq.Circuit()

    circuit.append(Oracle.on(*qubits))

    circuit.append(cirq.H(qubits[4]))
    cz_gate_0 = cirq.CZPowGate(exponent=0.0625)
    circuit.append(cz_gate_0(qubits[0], qubits[4]))
    cz_gate_1 = cirq.CZPowGate(exponent=0.125)
    circuit.append(cz_gate_1(qubits[1], qubits[4]))
    cz_gate_2 = cirq.CZPowGate(exponent=0.25)
    circuit.append(cz_gate_2(qubits[2], qubits[4]))
    cz_gate_3 = cirq.CZPowGate(exponent=0.5)
    circuit.append(cz_gate_3(qubits[3], qubits[4]))
    circuit.append(cirq.H(qubits[3]))
    cz_gate_0 = cirq.CZPowGate(exponent=0.125)
    circuit.append(cz_gate_0(qubits[0], qubits[3]))
    cz_gate_1 = cirq.CZPowGate(exponent=0.25)
    circuit.append(cz_gate_1(qubits[1], qubits[3]))
    cz_gate_2 = cirq.CZPowGate(exponent=0.5)
    circuit.append(cz_gate_2(qubits[2], qubits[3]))
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
