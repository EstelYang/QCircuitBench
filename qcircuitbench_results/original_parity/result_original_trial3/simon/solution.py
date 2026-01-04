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

def _bits_from_int_le(value, n):
    return [(value >> i) & 1 for i in range(n)]

def _insert_into_echelon(basis, row):
    x = row
    while x:
        pivot = x.bit_length() - 1
        if basis[pivot] == 0:
            basis[pivot] = x
            return True
        x ^= basis[pivot]
    return False

def _echelon_basis_and_rank(rows, n):
    basis = [0] * n
    rank = 0
    for r in rows:
        if _insert_into_echelon(basis, r):
            rank += 1
            if rank == n:
                break
    return basis, rank

def _solve_for_nonzero_null_vector(basis, n):
    pivot_set = {i for i, v in enumerate(basis) if v != 0}
    free_vars = [i for i in range(n) if i not in pivot_set]
    if not free_vars:
        return 0

    f = free_vars[0]
    s = 1 << f

    for i in sorted(pivot_set, reverse=True):
        row = basis[i]
        if ((row & s).bit_count() & 1) == 1:
            s |= 1 << i
    return s

def run_and_analyze(circuit, aer_sim):
    n = 8
    tqc = transpile(circuit, aer_sim, optimization_level=0)

    rows = []
    basis = [0] * n
    rank = 0

    # Keep sampling until we have enough independent equations (rank n-1),
    # which makes the solution for s unique up to the promise (nonzero).
    for _ in range(12):
        result = aer_sim.run(tqc, shots=1024).result()
        counts = result.get_counts(tqc)
        for bitstr in counts:
            val = int(bitstr, 2)
            if val == 0:
                continue
            rows.append(val)
            if _insert_into_echelon(basis, val):
                rank += 1
                if rank >= n - 1:
                    break
        if rank >= n - 1:
            break

    if rank < n - 1:
        basis, _ = _echelon_basis_and_rank(rows, n)

    s_int = _solve_for_nonzero_null_vector(basis, n)

    s_bits_le = _bits_from_int_le(s_int, n)
    prediction = "".join(str(s_bits_le[i]) for i in range(n - 1, -1, -1))
    return prediction
"""
