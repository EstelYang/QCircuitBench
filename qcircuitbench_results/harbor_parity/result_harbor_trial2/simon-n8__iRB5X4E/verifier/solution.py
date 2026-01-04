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

code_string = """from typing import Optional

from qiskit import transpile


def _parity(x: int) -> int:
    return bin(x).count("1") & 1


def _find_s_from_equations(equations: set[int], n: int) -> Optional[int]:
    if not equations:
        return None
    candidates = []
    for s in range(1, 1 << n):
        ok = True
        for y in equations:
            if _parity(y & s) != 0:
                ok = False
                break
        if ok:
            candidates.append(s)
            if len(candidates) > 1:
                break
    return candidates[0] if len(candidates) == 1 else None


def run_and_analyze(circuit, aer_sim):
    n = 8
    equations = set()
    shots = 4096
    tqc = transpile(circuit, aer_sim)

    while shots <= 131072:
        result = aer_sim.run(tqc, shots=shots).result()
        counts = result.get_counts()

        for bitstring in counts:
            y = int(bitstring, 2)
            if y != 0:
                equations.add(y)

        s_int = _find_s_from_equations(equations, n)
        if s_int is not None:
            prediction = format(s_int, f"0{n}b")
            return prediction

        shots *= 2

    prediction = "0" * n
    return prediction
"""
