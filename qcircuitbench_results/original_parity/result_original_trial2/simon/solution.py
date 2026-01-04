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

def _gf2_rref(rows, n):
    # rows: list of ints, each int uses n bits (bit i corresponds to qubit i / c[i])
    rows = [r & ((1 << n) - 1) for r in rows if r & ((1 << n) - 1)]
    pivots = []
    r = 0
    for col in range(n - 1, -1, -1):
        pivot = None
        for i in range(r, len(rows)):
            if (rows[i] >> col) & 1:
                pivot = i
                break
        if pivot is None:
            continue
        rows[r], rows[pivot] = rows[pivot], rows[r]
        piv = rows[r]
        for i in range(len(rows)):
            if i != r and ((rows[i] >> col) & 1):
                rows[i] ^= piv
        pivots.append(col)
        r += 1
        if r == len(rows):
            break
    return rows, pivots

def _nullspace_basis(rows, n):
    # Return basis vectors for {s != 0 | rows * s = 0} over GF(2)
    rref_rows, pivots = _gf2_rref(rows, n)
    pivot_set = set(pivots)
    free_cols = [c for c in range(n) if c not in pivot_set]
    if not free_cols:
        return []
    basis = []
    for free in free_cols:
        s = 1 << free
        for row in rref_rows:
            if row == 0:
                continue
            lead = row.bit_length() - 1
            if lead in pivot_set and ((row >> free) & 1):
                s ^= (1 << lead)
        if s:
            basis.append(s)
    return basis

def _int_to_little_endian_bitstring(val, n):
    return ''.join('1' if (val >> i) & 1 else '0' for i in range(n - 1, -1, -1))

def _bitstring_to_row(bitstr, n):
    if bitstr is None:
        return 0
    b = bitstr.replace(' ', '')
    if len(b) < n:
        b = b.rjust(n, '0')
    b = b[-n:]
    y = 0
    # rightmost is c[0]
    for i in range(n):
        if b[-1 - i] == '1':
            y |= (1 << i)
    return y

def run_and_analyze(circuit, aer_sim):
    n = 8
    tcirc = transpile(circuit, aer_sim)
    uniq_rows = set()
    s_int = 1
    for shots in (256, 1024, 4096, 16384, 65536):
        result = aer_sim.run(tcirc, shots=shots).result()
        counts = result.get_counts()
        for bitstr in counts.keys():
            y = _bitstring_to_row(bitstr, n)
            if y:
                uniq_rows.add(y)
        basis = _nullspace_basis(list(uniq_rows), n)
        if len(basis) == 1:
            s_int = basis[0]
            break
        if basis:
            s_int = basis[0]

    prediction = _int_to_little_endian_bitstring(s_int, n)
    return prediction
"""
