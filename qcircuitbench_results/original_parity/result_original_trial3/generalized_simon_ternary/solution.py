qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[10] q;
bit[10] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9];
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
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    tcirc = transpile(circuit, aer_sim, optimization_level=0)
    shots = 8192
    result = aer_sim.run(tcirc, shots=shots).result()
    counts = result.get_counts(tcirc)

    def decode_bitstring(bs: str, little_endian: bool):
        bs = bs.replace(" ", "")
        if len(bs) < 10:
            bs = bs.zfill(10)
        if little_endian:
            # Typical Qiskit ordering: rightmost is c[0].
            bits = [1 if bs[-1 - i] == "1" else 0 for i in range(10)]
        else:
            # Defensive alternate ordering: leftmost is c[0].
            bits = [1 if bs[i] == "1" else 0 for i in range(10)]
        x_int = sum(bits[i] << i for i in range(5))
        y_int = sum(bits[5 + i] << i for i in range(5))
        return x_int, y_int

    def int_to_trits3(v: int):
        # Interpret the 5-bit basis state as encoding a ternary vector in {0,1,2}^3.
        t0 = v % 3
        v //= 3
        t1 = v % 3
        v //= 3
        t2 = v % 3
        return (t0, t1, t2)

    def delta_trits(a_int: int, b_int: int):
        a0, a1, a2 = int_to_trits3(a_int)
        b0, b1, b2 = int_to_trits3(b_int)
        return ((b0 - a0) % 3, (b1 - a1) % 3, (b2 - a2) % 3)

    def canonical(v):
        w = ((2 * v[0]) % 3, (2 * v[1]) % 3, (2 * v[2]) % 3)
        vs = "".join(str(d) for d in v)
        ws = "".join(str(d) for d in w)
        return min(vs, ws)

    def best_from_mapping(little_endian: bool):
        buckets = {}  # y_int -> {x_int: weight}
        for bs, ct in counts.items():
            x_int, y_int = decode_bitstring(bs, little_endian=little_endian)
            if x_int >= 27:
                continue
            m = buckets.get(y_int)
            if m is None:
                m = {}
                buckets[y_int] = m
            m[x_int] = m.get(x_int, 0) + int(ct)

        score = {}  # canonical_s -> weight
        for m in buckets.values():
            xs = list(m.items())
            if len(xs) < 2:
                continue
            for i in range(len(xs)):
                x1, c1 = xs[i]
                for j in range(i + 1, len(xs)):
                    x2, c2 = xs[j]
                    if x1 == x2:
                        continue
                    d = delta_trits(x1, x2)
                    if d == (0, 0, 0):
                        continue
                    key = canonical(d)
                    score[key] = score.get(key, 0) + c1 * c2

        if not score:
            return None, -1
        best_key = max(score, key=score.get)
        return best_key, score[best_key]

    best_little, score_little = best_from_mapping(True)
    best_big, score_big = best_from_mapping(False)

    if best_little is None and best_big is None:
        prediction = "001"
        return prediction

    prediction = best_little if score_little >= score_big else best_big
    return prediction
"""
