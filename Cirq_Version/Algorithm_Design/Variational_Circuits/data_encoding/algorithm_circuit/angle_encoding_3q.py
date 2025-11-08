import cirq
import math

def algorithm():
    q = cirq.LineQubit.range(3)
    c = cirq.Circuit()
    c.append(cirq.ry(0).on(q[0]))
    c.append(cirq.ry(math.pi/2).on(q[1]))
    c.append(cirq.ry(math.pi).on(q[2]))
    return c

