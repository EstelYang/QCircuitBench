import cirq
def algorithm(Oracle):
    qubits = cirq.LineQubit.range(4)
    circuit = cirq.Circuit()

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.X(qubits[3]))
    circuit.append(cirq.H(qubits[3]))

    circuit.append(Oracle.on(*qubits))

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.measure(qubits[0], key='c0'))
    circuit.append(cirq.measure(qubits[1], key='c1'))
    circuit.append(cirq.measure(qubits[2], key='c2'))

    return circuit
