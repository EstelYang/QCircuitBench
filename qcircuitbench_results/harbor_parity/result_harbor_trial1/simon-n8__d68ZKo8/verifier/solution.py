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


def run_and_analyze(circuit, aer_sim):
    n = 8

    def parity(x: int) -> int:
        return x.bit_count() & 1

    def nullspace_basis(row_masks):
        rows = [r for r in row_masks if r != 0]
        if not rows:
            return [1]

        pivot_rows = []
        pivot_cols = []
        r = 0
        for col in range(n):
            pivot = None
            for i in range(r, len(rows)):
                if (rows[i] >> col) & 1:
                    pivot = i
                    break
            if pivot is None:
                continue
            rows[r], rows[pivot] = rows[pivot], rows[r]
            pivot_row = rows[r]
            for i in range(len(rows)):
                if i != r and ((rows[i] >> col) & 1):
                    rows[i] ^= pivot_row
            pivot_rows.append(pivot_row)
            pivot_cols.append(col)
            r += 1
            if r == len(rows):
                break

        pivot_set = set(pivot_cols)
        free_cols = [c for c in range(n) if c not in pivot_set]
        basis = []
        for free in free_cols:
            vec = 1 << free
            for prow, pcol in zip(pivot_rows, pivot_cols):
                other = prow & vec & ~(1 << pcol)
                if parity(other):
                    vec |= 1 << pcol
            basis.append(vec)
        return basis

    observed = set()
    shots = 512
    prediction = "00000000"

    for _ in range(6):
        tqc = transpile(circuit, aer_sim)
        result = aer_sim.run(tqc, shots=shots).result()
        counts = result.get_counts()

        for y_str in counts:
            y_mask = 0
            for i in range(n):
                if y_str[-1 - i] == "1":
                    y_mask |= 1 << i
            if y_mask != 0:
                observed.add(y_mask)

        basis = nullspace_basis(list(observed))
        nonzero = [b for b in basis if b != 0]
        if len(nonzero) == 1:
            s_mask = nonzero[0]
            prediction = "".join("1" if (s_mask >> i) & 1 else "0" for i in range(n - 1, -1, -1))
            if prediction != "00000000":
                return prediction

        shots *= 2

    if observed:
        basis = nullspace_basis(list(observed))
        for s_mask in basis:
            if s_mask != 0:
                prediction = "".join("1" if (s_mask >> i) & 1 else "0" for i in range(n - 1, -1, -1))
                break

    return prediction
"""
