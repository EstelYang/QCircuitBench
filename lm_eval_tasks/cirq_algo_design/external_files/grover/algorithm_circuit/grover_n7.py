import math
import cirq

def _diffuser(qubits):
    """Grover diffuser on `qubits` (size n).
    Implements H^n · X^n · H(target) · MCX(controls->target) · H(target) · X^n · H^n.
    """
    n = len(qubits)
    ops = []
    # H on all
    ops += [cirq.H(q) for q in qubits]
    # X on all
    ops += [cirq.X(q) for q in qubits]
    # Multi-controlled X targeting the last qubit, with H wrappers
    ops.append(cirq.H(qubits[-1]))
    ops.append(cirq.X.controlled(num_controls=n-1).on(*qubits))
    ops.append(cirq.H(qubits[-1]))
    # Undo X and H on all
    ops += [cirq.X(q) for q in qubits]
    ops += [cirq.H(q) for q in qubits]
    return ops

def algorithm(Oracle):
    qubits = cirq.LineQubit.range(7)
    circuit = cirq.Circuit()
    circuit.append(cirq.H(qubits[0]))
    circuit.append(cirq.H(qubits[1]))
    circuit.append(cirq.H(qubits[2]))
    circuit.append(cirq.H(qubits[3]))
    circuit.append(cirq.H(qubits[4]))
    circuit.append(cirq.H(qubits[5]))
    circuit.append(cirq.H(qubits[6]))

    num_iterations = math.floor(math.pi / 4 * math.sqrt(2**7))
    for _ in range(num_iterations):
        # Phase oracle for the marked state
        circuit.append(Oracle.on(*qubits))
        # Diffusion operator
        circuit.append(_diffuser(qubits))

    # Measure all qubits
    circuit.append(cirq.measure(qubits[0], key='c0'))
    circuit.append(cirq.measure(qubits[1], key='c1'))
    circuit.append(cirq.measure(qubits[2], key='c2'))
    circuit.append(cirq.measure(qubits[3], key='c3'))
    circuit.append(cirq.measure(qubits[4], key='c4'))
    circuit.append(cirq.measure(qubits[5], key='c5'))
    circuit.append(cirq.measure(qubits[6], key='c6'))

    return circuit
