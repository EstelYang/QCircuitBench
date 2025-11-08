import cirq

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(21)
    circuit = cirq.Circuit()

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[3]))
    circuit.append(cirq.H(qubits[4]))
    circuit.append(cirq.H(qubits[5]))
    circuit.append(cirq.H(qubits[6]))
    circuit.append(cirq.H(qubits[7]))
    circuit.append(cirq.H(qubits[8]))
    circuit.append(cirq.H(qubits[9]))
    circuit.append(cirq.H(qubits[20]))

    circuit.append(Oracle.on(*qubits))

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[3]))
    circuit.append(cirq.H(qubits[4]))
    circuit.append(cirq.H(qubits[5]))
    circuit.append(cirq.H(qubits[6]))
    circuit.append(cirq.H(qubits[7]))
    circuit.append(cirq.H(qubits[8]))
    circuit.append(cirq.H(qubits[9]))
    circuit.append(cirq.measure(qubits[20], key='c10'))
    circuit.append(cirq.measure(qubits[0], key='c0'))
    circuit.append(cirq.measure(qubits[1], key='c1'))
    circuit.append(cirq.measure(qubits[2], key='c2'))
    circuit.append(cirq.measure(qubits[3], key='c3'))
    circuit.append(cirq.measure(qubits[4], key='c4'))
    circuit.append(cirq.measure(qubits[5], key='c5'))
    circuit.append(cirq.measure(qubits[6], key='c6'))
    circuit.append(cirq.measure(qubits[7], key='c7'))
    circuit.append(cirq.measure(qubits[8], key='c8'))
    circuit.append(cirq.measure(qubits[9], key='c9'))

    return circuit
