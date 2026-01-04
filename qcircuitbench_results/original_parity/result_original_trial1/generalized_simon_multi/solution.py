qasm_string = r'''OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[17] q;
bit[8] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
measure q[0] -> c[0];
measure q[1] -> c[1];
measure q[2] -> c[2];
measure q[3] -> c[3];
measure q[4] -> c[4];
measure q[5] -> c[5];
measure q[6] -> c[6];
measure q[7] -> c[7];
'''

code_string = r'''from qiskit import transpile

def _parity(x: int) -> int:
    # Returns parity of bitcount(x) (0 for even, 1 for odd).
    x ^= x >> 4
    x ^= x >> 2
    x ^= x >> 1
    return x & 1

def _dot_gf2(a: int, b: int) -> int:
    return _parity(a & b)

def _best_pair_from_counts(y_counts, total_shots: int):
    # Brute-force over all unordered pairs of nonzero secrets (n=8 => 255 candidates).
    # Score pairs by how well they "cover" samples: y·s1=0 OR y·s2=0.
    parity_table = [_parity(i) for i in range(256)]

    orth_count = [0] * 256
    for s in range(1, 256):
        cnt0 = 0
        for y, cnt in y_counts.items():
            if parity_table[y & s] == 0:
                cnt0 += cnt
        orth_count[s] = cnt0

    best = None  # tuple: (cover, ortho_sum, -min, -max)
    best_pair = (1, 2)
    for s1 in range(1, 256):
        for s2 in range(s1 + 1, 256):
            cover = 0
            for y, cnt in y_counts.items():
                if parity_table[y & s1] == 0 or parity_table[y & s2] == 0:
                    cover += cnt
            ortho_sum = orth_count[s1] + orth_count[s2]
            score = (cover, ortho_sum, -s1, -s2)
            if best is None or score > best:
                best = score
                best_pair = (s1, s2)

    # If samples are too few/noisy, the correct pair might not cover everything; retry in caller.
    return best_pair[0], best_pair[1], best[0], total_shots

def run_and_analyze(circuit, aer_sim):
    compiled = transpile(circuit, aer_sim, optimization_level=0)

    def collect(shots: int):
        result = aer_sim.run(compiled, shots=shots).result()
        counts = result.get_counts()
        y_counts = {}
        for bitstr, cnt in counts.items():
            y = int(bitstr, 2)  # bit i corresponds to c[i], with c[7]..c[0] in the string.
            y_counts[y] = y_counts.get(y, 0) + cnt
        return y_counts

    shots = 8192
    y_counts = collect(shots)
    s1, s2, cover, total = _best_pair_from_counts(y_counts, shots)

    # If something is off (shouldn't happen for a valid oracle), take more shots once.
    if cover < total:
        shots2 = 24576
        y_counts2 = collect(shots2)
        s1b, s2b, cover2, total2 = _best_pair_from_counts(y_counts2, shots2)
        if cover2 * total >= cover * total2:
            s1, s2 = s1b, s2b

    prediction1 = format(s1, '08b')
    prediction2 = format(s2, '08b')
    return prediction1, prediction2
'''
