import cirq

def algorithm():
    q0, q1 = cirq.LineQubit.range(2)
    circuit = cirq.Circuit()
    circuit.append(cirq.H(q0))
    circuit.append(cirq.CX(q0, q1))


    circuit.append(cirq.CX(q0, q1))
    circuit.append(cirq.H(q0))

    circuit.append(cirq.measure(q0, key='c0'))
    circuit.append(cirq.measure(q1, key='c1'))

    return circuit
