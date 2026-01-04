qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[9] q;
bit[8] c;
x q[8];
h q[8];
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8];
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
    compiled = transpile(circuit, aer_sim)
    result = aer_sim.run(compiled, shots=1024).result()
    counts = result.get_counts()
    prediction = max(counts, key=counts.get)
    return prediction
"""
