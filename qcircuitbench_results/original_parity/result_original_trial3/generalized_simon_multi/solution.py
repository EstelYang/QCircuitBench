qasm_string = """OPENQASM 3.0;
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
"""

code_string = r"""from qiskit import transpile
from qiskit_aer import AerSimulator
import math

def run_and_analyze(circuit, aer_sim):
    # Each shot yields y drawn from 0.5*U({y: y·s1=0}) + 0.5*U({y: y·s2=0}).
    shots = 16384
    tcirc = transpile(circuit, aer_sim, optimization_level=0)
    result = aer_sim.run(tcirc, shots=shots).result()
    counts = result.get_counts(tcirc)

    def parity_even(x: int) -> bool:
        # True iff popcount(x) is even
        return (x.bit_count() & 1) == 0

    def decode_counts(little_endian: bool):
        # Returns dict {ymask: weight}, where ymask bit i corresponds to measured qubit i.
        y_weight = {}
        for bs, ct in counts.items():
            bs = bs.replace(" ", "")
            if len(bs) < 8:
                bs = bs.zfill(8)
            if little_endian:
                # Qiskit count strings are typically c[7]..c[0]; map rightmost to bit 0.
                ymask = 0
                for i in range(8):
                    if bs[-1 - i] == "1":
                        ymask |= 1 << i
            else:
                # Alternate mapping (defensive): leftmost to bit 0.
                ymask = 0
                for i in range(8):
                    if bs[i] == "1":
                        ymask |= 1 << i
            if ymask == 0:
                continue
            y_weight[ymask] = y_weight.get(ymask, 0) + int(ct)
        return y_weight

    def best_pair_for_mapping(y_weight):
        # Maximum-likelihood for mixture: P(y)= (I[y·a=0] + I[y·b=0]) / 2^8 with p=0.5.
        # Up to an additive constant, maximize sum_w log(Ia+Ib). Any y with Ia+Ib=0 is impossible.
        if not y_weight:
            return None, -1e30

        ys = list(y_weight.keys())
        ws = [y_weight[y] for y in ys]

        # Precompute orthogonality table: orth[y][s] = 1 iff y·s == 0 over GF(2).
        orth = [[0] * 256 for _ in range(256)]
        for y in range(256):
            for s in range(256):
                orth[y][s] = 1 if parity_even(y & s) else 0
        log2 = math.log(2.0)

        best_score = -1e30
        best = None

        # Enumerate all nonzero secrets; n=8 is tiny (255).
        for a in range(1, 256):
            for b in range(a + 1, 256):
                score = 0.0
                for y, w in zip(ys, ws):
                    k = orth[y][a] + orth[y][b]
                    if k == 0:
                        score = -1e30
                        break
                    # Ignore constant -w*log(256); log(1)=0, so only overlap (k=2) matters.
                    if k == 2:
                        score += w * log2
                if score > best_score:
                    best_score = score
                    best = (a, b)
        return best, best_score

    # Decode in the usual Qiskit way first; fall back to alternate bit-order if needed.
    best_little, score_little = best_pair_for_mapping(decode_counts(little_endian=True))
    best_big, score_big = best_pair_for_mapping(decode_counts(little_endian=False))

    if best_little is None and best_big is None:
        # Degenerate fallback
        prediction1 = "00000001"
        prediction2 = "00000010"
        return prediction1, prediction2

    a, b = best_little if score_little >= score_big else best_big

    prediction1 = format(a, "08b")
    prediction2 = format(b, "08b")
    return prediction1, prediction2
"""
