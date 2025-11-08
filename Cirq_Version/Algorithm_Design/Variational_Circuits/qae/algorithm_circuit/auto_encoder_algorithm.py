import cirq
import sympy as sp


def algorithm(state_oracle, swap_test_oracle):
    q = cirq.LineQubit.range(8)
    c = cirq.Circuit()

    c.append(state_oracle.on(*q[:5]))

    num_qubits = 5
    reps = 5
    thetas = [sp.Symbol(f'theta_{i}') for i in range(num_qubits * (reps + 1))]
    it = iter(thetas)

    for i in range(num_qubits):
        c.append(cirq.ry(next(it)).on(q[i]))

    for _ in range(reps):
        for i in range(num_qubits - 1):
            c.append(cirq.CNOT(q[i], q[i + 1]))
        for i in range(num_qubits):
            c.append(cirq.ry(next(it)).on(q[i]))

    c.append(swap_test_oracle.on(*q))

    c.append(cirq.measure(q[7], key='c'))

    return c

