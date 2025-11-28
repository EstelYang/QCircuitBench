import cirq

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(2 * 16 + 1)
    ancilla = qubits[-1]
    psi_qubits = qubits[:16]
    phi_qubits = qubits[16:2 * 16]
    circuit = cirq.Circuit()

    circuit.append(Oracle.on(*psi_qubits, *phi_qubits))

    circuit.append(cirq.H(ancilla))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[0], phi_qubits[0]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[1], phi_qubits[1]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[2], phi_qubits[2]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[3], phi_qubits[3]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[4], phi_qubits[4]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[5], phi_qubits[5]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[6], phi_qubits[6]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[7], phi_qubits[7]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[8], phi_qubits[8]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[9], phi_qubits[9]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[10], phi_qubits[10]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[11], phi_qubits[11]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[12], phi_qubits[12]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[13], phi_qubits[13]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[14], phi_qubits[14]))
    circuit.append(cirq.CSWAP(ancilla, psi_qubits[15], phi_qubits[15]))
    circuit.append(cirq.H(ancilla))
    circuit.append(cirq.measure(ancilla, key='result'))

    return circuit
