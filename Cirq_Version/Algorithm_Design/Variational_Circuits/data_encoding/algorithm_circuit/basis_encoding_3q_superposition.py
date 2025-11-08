import cirq
import numpy as np
import math

def algorithm():
    q = cirq.LineQubit.range(3)
    desired_state = np.zeros(8, dtype=complex)
    desired_state[5] = 1 / math.sqrt(2)
    desired_state[7] = 1 / math.sqrt(2)
    prep = cirq.StatePreparationChannel(desired_state)
    c = cirq.Circuit(prep.on(*q))
    return c

