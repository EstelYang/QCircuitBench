qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[16] q;
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

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator

def _parity(x: int) -> int:
    return x.bit_count() & 1

def _bitstring_to_int(bitstr: str, n: int) -> int:
    # Qiskit count keys may include spaces when multiple classical registers exist.
    b = bitstr.replace(" ", "").strip()
    if len(b) != n:
        b = b.zfill(n)
    return int(b, 2)

def _solve_candidates(equations, n: int):
    # Find all non-zero s such that for every measured y: y·s = 0 over GF(2).
    candidates = []
    for s in range(1, 1 << n):
        ok = True
        for y in equations:
            if _parity(y & s) != 0:
                ok = False
                break
        if ok:
            candidates.append(s)
    return candidates

def run_and_analyze(circuit, aer_sim):
    n = 8
    tcirc = transpile(circuit, aer_sim)

    equations = set()
    shots_list = [2048, 4096, 8192, 16384]
    for shots in shots_list:
        result = aer_sim.run(tcirc, shots=shots).result()
        counts = result.get_counts()
        for bitstr in counts.keys():
            y = _bitstring_to_int(bitstr, n)
            if y != 0:
                equations.add(y)

        candidates = _solve_candidates(equations, n)
        if len(candidates) == 1:
            prediction = format(candidates[0], "0{}b".format(n))
            return prediction

    # Fallback: if bit-ordering is unexpectedly reversed, try that once.
    equations_rev = set()
    for y in equations:
        y_rev = 0
        for i in range(n):
            if (y >> i) & 1:
                y_rev |= 1 << (n - 1 - i)
        if y_rev != 0:
            equations_rev.add(y_rev)
    candidates_rev = _solve_candidates(equations_rev, n)
    if len(candidates_rev) == 1:
        prediction = format(candidates_rev[0], "0{}b".format(n))
        return prediction

    # As a last resort, return a deterministic non-zero candidate if any exist.
    if candidates_rev:
        prediction = format(min(candidates_rev), "0{}b".format(n))
        return prediction
    candidates = _solve_candidates(equations, n)
    if candidates:
        prediction = format(min(candidates), "0{}b".format(n))
        return prediction

    prediction = "0" * n
    return prediction
"""
