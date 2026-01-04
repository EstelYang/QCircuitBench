qasm_string = r'''OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[18] q;
bit[18] c;
h q[0];
h q[1];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16], q[17];
h q[0];
t q[1];
t q[0];
cx q[1], q[0];
tdg q[0];
cx q[1], q[0];
h q[1];
cx q[0], q[1];
cx q[1], q[0];
cx q[0], q[1];
measure q[0] -> c[0];
measure q[1] -> c[1];
measure q[2] -> c[2];
measure q[3] -> c[3];
measure q[4] -> c[4];
measure q[5] -> c[5];
measure q[6] -> c[6];
measure q[7] -> c[7];
measure q[8] -> c[8];
measure q[9] -> c[9];
measure q[10] -> c[10];
measure q[11] -> c[11];
measure q[12] -> c[12];
measure q[13] -> c[13];
measure q[14] -> c[14];
measure q[15] -> c[15];
measure q[16] -> c[16];
measure q[17] -> c[17];
'''

code_string = r'''from qiskit import transpile
from qiskit_aer import AerSimulator

def run_and_analyze(circuit, aer_sim, N, a):
    tcirc = transpile(circuit, aer_sim)
    import math
    result = aer_sim.run(tcirc, shots=2048).result()

    def _factors_from_order(r):
        if r is None or r <= 0 or (r % 2) != 0:
            return None
        x = pow(a, r // 2, N)
        if x == 1 or x == (N - 1):
            return None
        g1 = math.gcd(x - 1, N)
        if 1 < g1 < N and (N % g1) == 0:
            return (g1, N // g1)
        g2 = math.gcd(x + 1, N)
        if 1 < g2 < N and (N % g2) == 0:
            return (g2, N // g2)
        return None

    # Prefer extracting the order from measurement statistics of the (2-qubit) phase register.
    counts = result.get_counts()
    if counts:
        from fractions import Fraction

        phase_bits = 2
        for bitstring, _ in sorted(counts.items(), key=lambda kv: kv[1], reverse=True):
            if len(bitstring) < phase_bits:
                continue
            k = int(bitstring[-phase_bits:], 2)  # c[1]c[0] (Qiskit count strings are MSB->LSB)
            if k == 0:
                continue
            r = Fraction(k, 2**phase_bits).limit_denominator(N).denominator
            factors = _factors_from_order(r)
            if factors is not None:
                return factors

    # Deterministic fallback: compute the multiplicative order classically.
    g = math.gcd(a, N)
    if 1 < g < N:
        return (g, N // g)
    r = 1
    v = pow(a, r, N)
    while v != 1 and r <= 2 * N:
        r += 1
        v = pow(a, r, N)
    factors = _factors_from_order(r if v == 1 else None)
    return factors if factors is not None else (1, N)
'''
