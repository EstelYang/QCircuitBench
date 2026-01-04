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

code_string = r'''
from qiskit import transpile

def _parity(x: int) -> int:
    return x.bit_count() & 1

def _int_to_bitstring(x, n):
    return format(x, '0{}b'.format(n))

def _weighted_sum_from_bitmask(bitmask, weights):
    total = 0
    x = bitmask
    while x:
        lsb = x & -x
        idx = lsb.bit_length() - 1
        total += weights[idx]
        x ^= lsb
    return total

def run_and_analyze(circuit, aer_sim):
    n = 8
    shots = 8192

    tcirc = transpile(circuit, aer_sim, optimization_level=0)
    counts_total = {}
    for _ in range(3):
        result = aer_sim.run(tcirc, shots=shots).result()
        counts = result.get_counts(tcirc)
        for bitstr, cnt in counts.items():
            counts_total[bitstr] = counts_total.get(bitstr, 0) + cnt

    # Convert to a compact list of (y, weight), where bit i corresponds to c[i].
    ys = []
    weights = []
    for bitstr, cnt in counts_total.items():
        y = int(bitstr, 2)
        ys.append(y)
        weights.append(cnt)

    if not ys:
        prediction1 = '0' * n
        prediction2 = '0' * n
        return prediction1, prediction2

    # Precompute dot-parity masks: mask[s] has bit i set iff (ys[i] · s) == 1 (mod 2).
    masks = [0] * (1 << n)
    for s in range(1 << n):
        m = 0
        for i, y in enumerate(ys):
            if _parity(y & s):
                m |= 1 << i
        masks[s] = m

    all_mask = (1 << len(ys)) - 1

    best_a = 1
    best_b = 2
    best_viol = None
    best_one = None

    for a in range(1, 1 << n):
        mA = masks[a]
        for b in range(a + 1, 1 << n):
            mB = masks[b]
            viol = _weighted_sum_from_bitmask(mA & mB, weights)
            if best_viol is None or viol < best_viol:
                best_viol = viol
                best_one = None
            if viol != best_viol:
                continue

            # Likelihood tie-break: prefer more outcomes orthogonal to both (i.e., fewer "exactly one").
            one = _weighted_sum_from_bitmask((mA ^ mB) & all_mask, weights)
            if best_one is None or one < best_one or (one == best_one and (a, b) < (best_a, best_b)):
                best_a, best_b = a, b
                best_one = one

    # If no perfect pair exists (finite sampling), still return the best-scoring pair found.
    prediction1 = _int_to_bitstring(best_a, n)
    prediction2 = _int_to_bitstring(best_b, n)
    return prediction1, prediction2
'''
