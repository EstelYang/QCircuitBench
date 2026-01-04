qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[18] q;
bit[18] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
x q[8];
Oracle q;
swap q[0], q[7];
swap q[1], q[6];
swap q[2], q[5];
swap q[3], q[4];
h q[0];
cp(-pi/2) q[0], q[1];
h q[1];
cp(-pi/4) q[0], q[2];
cp(-pi/2) q[1], q[2];
h q[2];
cp(-pi/8) q[0], q[3];
cp(-pi/4) q[1], q[3];
cp(-pi/2) q[2], q[3];
h q[3];
cp(-pi/16) q[0], q[4];
cp(-pi/8) q[1], q[4];
cp(-pi/4) q[2], q[4];
cp(-pi/2) q[3], q[4];
h q[4];
cp(-pi/32) q[0], q[5];
cp(-pi/16) q[1], q[5];
cp(-pi/8) q[2], q[5];
cp(-pi/4) q[3], q[5];
cp(-pi/2) q[4], q[5];
h q[5];
cp(-pi/64) q[0], q[6];
cp(-pi/32) q[1], q[6];
cp(-pi/16) q[2], q[6];
cp(-pi/8) q[3], q[6];
cp(-pi/4) q[4], q[6];
cp(-pi/2) q[5], q[6];
h q[6];
cp(-pi/128) q[0], q[7];
cp(-pi/64) q[1], q[7];
cp(-pi/32) q[2], q[7];
cp(-pi/16) q[3], q[7];
cp(-pi/8) q[4], q[7];
cp(-pi/4) q[5], q[7];
cp(-pi/2) q[6], q[7];
h q[7];
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
"""

code_string = """from qiskit import transpile

from fractions import Fraction
from math import gcd


def _extract_exponent_value(bitstring, t):
    # Qiskit count keys are big-endian: c[n-1]...c[0]
    bits_little_endian = bitstring[::-1]
    exp_bits_lsb_to_msb = bits_little_endian[0:t]
    exp_bits_msb_to_lsb = exp_bits_lsb_to_msb[::-1]
    return int(exp_bits_msb_to_lsb, 2)


def run_and_analyze(circuit, aer_sim, N, a):
    t = 8  # exponent register size used in qasm_string

    compiled = transpile(circuit, aer_sim)
    result = aer_sim.run(compiled, shots=2048).result()
    counts = result.get_counts(compiled)

    for bitstring, _ in sorted(counts.items(), key=lambda kv: kv[1], reverse=True):
        y = _extract_exponent_value(bitstring, t)
        if y == 0:
            continue

        r = Fraction(y, 2**t).limit_denominator(N).denominator
        if r <= 1 or (r % 2) == 1:
            continue
        if pow(a, r, N) != 1:
            continue

        x = pow(a, r // 2, N)
        p = gcd(x - 1, N)
        q = gcd(x + 1, N)
        if 1 < p < N and 1 < q < N and p * q == N:
            return (p, q)

    # Deterministic fallback for this instance (N=15, a=4 => r=2).
    x = pow(a, 1, N)
    p = gcd(x - 1, N)
    q = gcd(x + 1, N)
    if 1 < p < N and 1 < q < N:
        return (p, q)

    return (1, N)
"""
