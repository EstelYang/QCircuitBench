qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[17] q;
bit[17] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];
measure q[8] -> c[8];
measure q[9] -> c[9];
measure q[10] -> c[10];
measure q[11] -> c[11];
measure q[12] -> c[12];
measure q[13] -> c[13];
measure q[14] -> c[14];
measure q[15] -> c[15];
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

code_string = """from qiskit import transpile


def _parity(x: int) -> int:
    return x.bit_count() & 1


def _to_index_order_bitstring(x: int, n: int) -> str:
    # Return bits in increasing-index order: bit 0 first, bit n-1 last.
    return "".join("1" if ((x >> i) & 1) else "0" for i in range(n))


def run_and_analyze(circuit, aer_sim):
    n = 8
    shots = 4096

    tcirc = transpile(circuit, aer_sim, optimization_level=0)
    result = aer_sim.run(tcirc, shots=shots).result()
    counts = result.get_counts()

    y_weight = {}
    for bitstring, weight in counts.items():
        # Qiskit count keys are c[16]..c[0] (left-to-right). c[0..7] are the last 8 chars.
        y = int(bitstring[-n:], 2)
        y_weight[y] = y_weight.get(y, 0) + weight

    # Brute-force all non-zero candidates and pick the two with the largest "orthogonality" score.
    scored = []
    for s in range(1, 1 << n):
        score = 0
        for y, weight in y_weight.items():
            if _parity(y & s) == 0:
                score += weight
        scored.append((score, s))

    scored.sort(reverse=True)
    s1 = scored[0][1]
    s2 = next(s for _, s in scored[1:] if s != s1)

    prediction1 = _to_index_order_bitstring(s1, n)
    prediction2 = _to_index_order_bitstring(s2, n)
    return prediction1, prediction2
"""

