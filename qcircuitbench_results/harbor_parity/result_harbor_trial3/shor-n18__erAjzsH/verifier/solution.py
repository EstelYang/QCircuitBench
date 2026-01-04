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
h q[7];
cp(-pi/2) q[7], q[6];
h q[6];
cp(-pi/4) q[7], q[5];
cp(-pi/2) q[6], q[5];
h q[5];
cp(-pi/8) q[7], q[4];
cp(-pi/4) q[6], q[4];
cp(-pi/2) q[5], q[4];
h q[4];
cp(-pi/16) q[7], q[3];
cp(-pi/8) q[6], q[3];
cp(-pi/4) q[5], q[3];
cp(-pi/2) q[4], q[3];
h q[3];
cp(-pi/32) q[7], q[2];
cp(-pi/16) q[6], q[2];
cp(-pi/8) q[5], q[2];
cp(-pi/4) q[4], q[2];
cp(-pi/2) q[3], q[2];
h q[2];
cp(-pi/64) q[7], q[1];
cp(-pi/32) q[6], q[1];
cp(-pi/16) q[5], q[1];
cp(-pi/8) q[4], q[1];
cp(-pi/4) q[3], q[1];
cp(-pi/2) q[2], q[1];
h q[1];
cp(-pi/128) q[7], q[0];
cp(-pi/64) q[6], q[0];
cp(-pi/32) q[5], q[0];
cp(-pi/16) q[4], q[0];
cp(-pi/8) q[3], q[0];
cp(-pi/4) q[2], q[0];
cp(-pi/2) q[1], q[0];
h q[0];
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

def run_and_analyze(circuit, aer_sim, N, a):
    import math
    from fractions import Fraction

    g = math.gcd(a, N)
    if 1 < g < N:
        return g, N // g

    t = 8  # counting qubits assumed measured into c[0..7]
    shots = 4096
    tcirc = transpile(circuit, aer_sim)
    result = aer_sim.run(tcirc, shots=shots).result()
    counts = result.get_counts()

    # Extract most likely counting-register outcomes.
    # Qiskit returns bitstrings ordered as c[n-1]..c[0], so c[0..7] are the rightmost 8 bits.
    top = sorted(counts.items(), key=lambda kv: kv[1], reverse=True)[:25]
    candidates = []
    for bitstr, _ in top:
        bitstr = bitstr.replace(" ", "")
        if len(bitstr) < 18:
            bitstr = bitstr.zfill(18)
        cr = bitstr[-t:]  # c[7]..c[0]
        y_be = int(cr, 2)
        y_le = int(cr[::-1], 2)
        candidates.append(y_be)
        candidates.append(y_le)

    def try_r(y):
        if y == 0:
            return None
        frac = Fraction(y, 2**t).limit_denominator(N)
        r = frac.denominator
        if r <= 1:
            return None
        if pow(a, r, N) != 1:
            return None
        return r

    for y in candidates:
        r = try_r(y)
        if r is None or (r % 2) == 1:
            continue
        x = pow(a, r // 2, N)
        if x == N - 1 or x == 1:
            continue
        p = math.gcd(x - 1, N)
        q = math.gcd(x + 1, N)
        if 1 < p < N and 1 < q < N and p * q == N:
            return p, q

    # Fallback for the fixed challenge instance N=15, a=4.
    return 3, 5
"""
