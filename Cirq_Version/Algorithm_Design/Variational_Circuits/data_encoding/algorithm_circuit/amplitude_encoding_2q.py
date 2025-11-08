import cirq
import numpy as np

def algorithm():
    q = cirq.LineQubit.range(2)
    vec = np.array([1.5, 0, -2, 3], dtype=float)
    vec = vec / np.linalg.norm(vec)
    prep = cirq.StatePreparationChannel(vec)
    c = cirq.Circuit(prep.on(*q))
    return c

