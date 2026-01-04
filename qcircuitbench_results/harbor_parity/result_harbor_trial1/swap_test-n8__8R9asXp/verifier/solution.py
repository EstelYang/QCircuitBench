qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[16] q;
bit[16] c;

Psi q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
Phi q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];

cx q[0], q[8];
h q[0];
cx q[1], q[9];
h q[1];
cx q[2], q[10];
h q[2];
cx q[3], q[11];
h q[3];
cx q[4], q[12];
h q[4];
cx q[5], q[13];
h q[5];
cx q[6], q[14];
h q[6];
cx q[7], q[15];
h q[7];

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
measure q[10] -> c[10];
measure q[11] -> c[11];
measure q[12] -> c[12];
measure q[13] -> c[13];
measure q[14] -> c[14];
measure q[15] -> c[15];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator

def run_and_analyze(circuit, aer_sim):
    shots = 50000
    tcircuit = transpile(circuit, aer_sim, optimization_level=0)
    result = aer_sim.run(tcircuit, shots=shots).result()
    counts = result.get_counts()

    total = 0.0
    total_shots = 0
    for bitstring, count in counts.items():
        bits = bitstring.replace(" ", "")
        rev = bits[::-1]  # rev[i] corresponds to classical bit c[i]

        antisym_pairs = 0
        if rev[0] == "1" and rev[8] == "1":
            antisym_pairs += 1
        if rev[1] == "1" and rev[9] == "1":
            antisym_pairs += 1
        if rev[2] == "1" and rev[10] == "1":
            antisym_pairs += 1
        if rev[3] == "1" and rev[11] == "1":
            antisym_pairs += 1
        if rev[4] == "1" and rev[12] == "1":
            antisym_pairs += 1
        if rev[5] == "1" and rev[13] == "1":
            antisym_pairs += 1
        if rev[6] == "1" and rev[14] == "1":
            antisym_pairs += 1
        if rev[7] == "1" and rev[15] == "1":
            antisym_pairs += 1

        sample_value = -1.0 if (antisym_pairs % 2 == 1) else 1.0
        total += sample_value * count
        total_shots += count

    if total_shots == 0:
        return 0.0

    similarity = total / float(total_shots)
    if similarity < 0.0:
        similarity = 0.0
    if similarity > 1.0:
        similarity = 1.0
    return float(similarity)
"""
