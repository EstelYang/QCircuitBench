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
    tcircuit = transpile(circuit, aer_sim)
    job = aer_sim.run(tcircuit, shots=8192)
    result = job.result()
    counts = result.get_counts()

    shots = sum(counts.values())
    if shots == 0:
        return 0.0

    exp_swap = 0.0
    for bitstring, count in counts.items():
        bits = bitstring.replace(" ", "").zfill(16)[::-1]
        sign = 1.0
        for i in range(8):
            if bits[i] == "1" and bits[i + 8] == "1":
                sign = -sign
        exp_swap += sign * (count / shots)

    if exp_swap < 0.0:
        return 0.0
    if exp_swap > 1.0:
        return 1.0
    return float(exp_swap)
"""
