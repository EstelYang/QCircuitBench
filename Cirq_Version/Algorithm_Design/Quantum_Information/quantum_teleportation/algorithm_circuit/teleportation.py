import cirq


def algorithm(psi_gate):
    # q0: Alice's payload, q1: Alice's entangled half, q2: Bob
    q0, q1, q2 = cirq.LineQubit.range(3)
    circuit = cirq.Circuit()

    # Prepare |psi> on q0
    circuit.append(psi_gate.on(q0))

    # Create Bell pair between q1 and q2
    circuit.append(cirq.H(q1))
    circuit.append(cirq.CX(q1, q2))

    # Alice operations
    circuit.append(cirq.CX(q0, q1))
    circuit.append(cirq.H(q0))

    # Apply equivalent controlled unitaries BEFORE measurement:
    circuit.append(cirq.CX(q1, q2))  # X if m1=1
    circuit.append(cirq.CZ(q0, q2))  # Z if m0=1

    # Now measure Alice's qubits (doesn't disturb q2 anymore)
    circuit.append(cirq.measure(q0, key="c0"))
    circuit.append(cirq.measure(q1, key="c1"))

    return circuit
