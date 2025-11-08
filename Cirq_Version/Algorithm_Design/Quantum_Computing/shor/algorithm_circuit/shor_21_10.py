import cirq
import math

def iqft(qubits):
    """Little-endian inverse QFT (no measurement)."""
    n = len(qubits)
    for i in range(n-1, -1, -1):
        for j in range(n-1, i, -1):
            yield (cirq.CZ(qubits[j], qubits[i]) ** (-1/(2**(j-i))))
        yield cirq.H(qubits[i])

def algorithm(Oracle):
    n = math.ceil(math.log(21, 2))
    qubits = cirq.LineQubit.range(4*n + 2)
    circuit = cirq.Circuit()

    up   = qubits[0:2*n]
    down = qubits[2*n:3*n]
    aux  = qubits[3*n:4*n+2]

    circuit.append(cirq.H.on_each(*up))
    circuit.append(cirq.X(down[0]))

    circuit.append(Oracle.on(*([*up, *down, *aux])))

    circuit.append(iqft(list(up)))

    for i in range(2*n):
        circuit.append(cirq.measure(up[i], key=f'c{i}'))

    return circuit
