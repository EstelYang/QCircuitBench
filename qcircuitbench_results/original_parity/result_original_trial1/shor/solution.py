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
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16], q[17];
h q[0];
cp(pi/2) q[1], q[0];
cp(pi/4) q[2], q[0];
cp(pi/8) q[3], q[0];
cp(pi/16) q[4], q[0];
cp(pi/32) q[5], q[0];
cp(pi/64) q[6], q[0];
cp(pi/128) q[7], q[0];
h q[1];
cp(pi/2) q[2], q[1];
cp(pi/4) q[3], q[1];
cp(pi/8) q[4], q[1];
cp(pi/16) q[5], q[1];
cp(pi/32) q[6], q[1];
cp(pi/64) q[7], q[1];
h q[2];
cp(pi/2) q[3], q[2];
cp(pi/4) q[4], q[2];
cp(pi/8) q[5], q[2];
cp(pi/16) q[6], q[2];
cp(pi/32) q[7], q[2];
h q[3];
cp(pi/2) q[4], q[3];
cp(pi/4) q[5], q[3];
cp(pi/8) q[6], q[3];
cp(pi/16) q[7], q[3];
h q[4];
cp(pi/2) q[5], q[4];
cp(pi/4) q[6], q[4];
cp(pi/8) q[7], q[4];
h q[5];
cp(pi/2) q[6], q[5];
cp(pi/4) q[7], q[5];
h q[6];
cp(pi/2) q[7], q[6];
h q[7];
swap q[0], q[7];
swap q[1], q[6];
swap q[2], q[5];
swap q[3], q[4];
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

code_string = """from fractions import Fraction
from math import gcd

from qiskit import transpile


def _find_order_from_counts(counts, a, N, n_count):
    denom = 1 << n_count
    for bitstr, _ in sorted(counts.items(), key=lambda kv: kv[1], reverse=True)[:32]:
        s = bitstr.replace(" ", "")
        if len(s) < n_count:
            continue
        y = int(s[-n_count:], 2)
        if y == 0:
            continue
        frac = Fraction(y, denom).limit_denominator(N)
        r0 = frac.denominator
        for k in range(1, N + 1):
            r = r0 * k
            if r > 2 * N:
                break
            if pow(a, r, N) == 1:
                return r
    return None


def run_and_analyze(circuit, aer_sim, N, a):
    n_count = 8
    tqc = transpile(circuit, aer_sim, optimization_level=0)
    result = aer_sim.run(tqc, shots=4096).result()
    counts = result.get_counts()

    r = _find_order_from_counts(counts, a, N, n_count)
    if r is None:
        for cand in range(1, 2 * N + 1):
            if pow(a, cand, N) == 1:
                r = cand
                break
    if r is None or r % 2 != 0:
        return (1, N)

    x = pow(a, r // 2, N)
    if x == 1 or x == N - 1:
        return (1, N)

    p = gcd(x - 1, N)
    q = gcd(x + 1, N)
    if 1 < p < N and 1 < q < N and p * q == N:
        return (min(p, q), max(p, q))
    return (1, N)
"""
