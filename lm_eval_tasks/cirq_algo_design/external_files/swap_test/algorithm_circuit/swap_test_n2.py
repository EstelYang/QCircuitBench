import cirq

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(2 * 2 + 1)
    ancilla = qubits[-1]
    psi_qubits = qubits[:2]
    phi_qubits = qubits[2:2 * 2]
    circuit = cirq.Circuit()

    circuit.append(Oracle.on(*psi_qubits, *phi_qubits))

    circuit.append(cirq.H(ancilla))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[0], phi_qubits[0]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[1], phi_qubits[1]))
    circuit.append(cirq.H(ancilla))
    circuit.append(cirq.measure(ancilla, key='result'))

    return circuit
