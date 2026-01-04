qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[16] q;
bit[16] c;
Psi q[0];
Psi q[1];
Psi q[2];
Psi q[3];
Psi q[4];
Psi q[5];
Psi q[6];
Psi q[7];
Phi q[8];
Phi q[9];
Phi q[10];
Phi q[11];
Phi q[12];
Phi q[13];
Phi q[14];
Phi q[15];
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
    tcirc = transpile(circuit, aer_sim)
    shots = 20000
    result = aer_sim.run(tcirc, shots=shots).result()
    counts = result.get_counts()
    exp_swap = 0.0
    for bitstring, count in counts.items():
        bits = bitstring.replace(" ", "")
        if len(bits) < 16:
            bits = bits.rjust(16, "0")
        bits_le = bits[::-1]  # bits_le[i] corresponds to c[i]

        antisym_pairs = 0
        if bits_le[0] == "1" and bits_le[8] == "1":
            antisym_pairs += 1
        if bits_le[1] == "1" and bits_le[9] == "1":
            antisym_pairs += 1
        if bits_le[2] == "1" and bits_le[10] == "1":
            antisym_pairs += 1
        if bits_le[3] == "1" and bits_le[11] == "1":
            antisym_pairs += 1
        if bits_le[4] == "1" and bits_le[12] == "1":
            antisym_pairs += 1
        if bits_le[5] == "1" and bits_le[13] == "1":
            antisym_pairs += 1
        if bits_le[6] == "1" and bits_le[14] == "1":
            antisym_pairs += 1
        if bits_le[7] == "1" and bits_le[15] == "1":
            antisym_pairs += 1

        eigenvalue = -1.0 if (antisym_pairs % 2) else 1.0
        exp_swap += eigenvalue * (count / float(shots))

    return max(0.0, min(1.0, exp_swap))
"""
