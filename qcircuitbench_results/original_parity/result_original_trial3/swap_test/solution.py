qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[17] q;
bit[1] c;
Psi q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
Phi q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];
h q[16];
cx q[8], q[0];
ccx q[16], q[0], q[8];
cx q[8], q[0];
cx q[9], q[1];
ccx q[16], q[1], q[9];
cx q[9], q[1];
cx q[10], q[2];
ccx q[16], q[2], q[10];
cx q[10], q[2];
cx q[11], q[3];
ccx q[16], q[3], q[11];
cx q[11], q[3];
cx q[12], q[4];
ccx q[16], q[4], q[12];
cx q[12], q[4];
cx q[13], q[5];
ccx q[16], q[5], q[13];
cx q[13], q[5];
cx q[14], q[6];
ccx q[16], q[6], q[14];
cx q[14], q[6];
cx q[15], q[7];
ccx q[16], q[7], q[15];
cx q[15], q[7];
h q[16];
measure q[16] -> c[0];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator

def run_and_analyze(circuit, aer_sim):
    compiled = transpile(circuit, aer_sim)
    shots = 8192
    result = aer_sim.run(compiled, shots=shots).result()
    counts = result.get_counts(compiled)
    p0 = counts.get("0", 0) / float(shots)
    similarity = 2.0 * p0 - 1.0
    similarity = max(0.0, min(1.0, similarity))
    return float(similarity)
"""
