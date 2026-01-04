qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[17] q;
bit[8] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16];
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

def run_and_analyze(circuit, aer_sim):
    tqc = transpile(circuit, aer_sim)
    result = aer_sim.run(tqc, shots=4096).result()
    counts = result.get_counts()

    # Score each nonzero s by how often y·s == 0 (mod 2) across samples.
    scores = [0] * 256
    for bitstring, count in counts.items():
        # Qiskit returns classical bits as c[7]..c[0] in the string.
        y = int(bitstring.replace(" ", ""), 2)
        for s in range(1, 256):
            if ((y & s).bit_count() & 1) == 0:
                scores[s] += count

    best1 = max(range(1, 256), key=lambda s: scores[s])
    best2 = max((s for s in range(1, 256) if s != best1), key=lambda s: scores[s])

    prediction1 = format(best1, "08b")[::-1]
    prediction2 = format(best2, "08b")[::-1]
    return prediction1, prediction2
"""
