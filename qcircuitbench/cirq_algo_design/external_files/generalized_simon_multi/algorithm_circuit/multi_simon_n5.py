import cirq

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(11)
    circuit = cirq.Circuit()

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[3]))
    circuit.append(cirq.H(qubits[4]))
    circuit.append(cirq.H(qubits[10]))

    circuit.append(Oracle.on(*qubits))

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[3]))
    circuit.append(cirq.H(qubits[4]))
    circuit.append(cirq.measure(qubits[10], key='c5'))
    circuit.append(cirq.measure(qubits[0], key='c0'))
    circuit.append(cirq.measure(qubits[1], key='c1'))
    circuit.append(cirq.measure(qubits[2], key='c2'))
    circuit.append(cirq.measure(qubits[3], key='c3'))
    circuit.append(cirq.measure(qubits[4], key='c4'))

    return circuit
