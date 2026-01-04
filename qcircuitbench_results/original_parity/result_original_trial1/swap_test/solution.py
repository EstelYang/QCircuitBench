qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[17] q;
bit[1] c;
Psi q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8];
Phi q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16];
h q[0];
cswap q[0], q[1], q[9];
cswap q[0], q[2], q[10];
cswap q[0], q[3], q[11];
cswap q[0], q[4], q[12];
cswap q[0], q[5], q[13];
cswap q[0], q[6], q[14];
cswap q[0], q[7], q[15];
cswap q[0], q[8], q[16];
h q[0];
measure q[0] -> c[0];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    tcirc = transpile(circuit, aer_sim)
    result = aer_sim.run(tcirc, shots=20000).result()
    try:
        counts = result.get_counts()
    except Exception:
        counts = result.get_counts(tcirc)
    shots = sum(counts.values()) if counts else 0
    if shots == 0:
        return 0.0
    p0 = counts.get("0", 0) / shots
    similarity = 2.0 * p0 - 1.0
    if similarity < 0.0:
        similarity = 0.0
    if similarity > 1.0:
        similarity = 1.0
    return float(similarity)
"""
