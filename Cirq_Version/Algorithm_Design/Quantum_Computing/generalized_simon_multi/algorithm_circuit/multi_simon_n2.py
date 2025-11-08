import cirq

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(5)
    circuit = cirq.Circuit()

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[4]))

    circuit.append(Oracle.on(*qubits))

    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.measure(qubits[4], key='c2'))
    circuit.append(cirq.measure(qubits[0], key='c0'))
    circuit.append(cirq.measure(qubits[1], key='c1'))

    return circuit
