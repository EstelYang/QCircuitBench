qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
x q[0];
ry(1.2094292028881888) q[1];
cx q[0], q[1];
ry(-1.2094292028881888) q[1];
cx q[0], q[1];
cx q[1], q[0];
ry(1.183199640139716) q[2];
cx q[1], q[2];
ry(-1.183199640139716) q[2];
cx q[1], q[2];
cx q[2], q[1];
ry(1.1502619915109314) q[3];
cx q[2], q[3];
ry(-1.1502619915109314) q[3];
cx q[2], q[3];
cx q[3], q[2];
ry(1.1071487177940904) q[4];
cx q[3], q[4];
ry(-1.1071487177940904) q[4];
cx q[3], q[4];
cx q[4], q[3];
ry(1.0471975511965979) q[5];
cx q[4], q[5];
ry(-1.0471975511965979) q[5];
cx q[4], q[5];
cx q[5], q[4];
ry(0.9553166181245092) q[6];
cx q[5], q[6];
ry(-0.9553166181245092) q[6];
cx q[5], q[6];
cx q[6], q[5];
ry(0.7853981633974484) q[7];
cx q[6], q[7];
ry(-0.7853981633974484) q[7];
cx q[6], q[7];
cx q[7], q[6];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    compiled = transpile(circuit, aer_sim)
    result = aer_sim.run(compiled, shots=2048).result()
    counts = result.get_counts(compiled)
    bitstr = max(counts, key=counts.get).replace(" ", "")
    bitstr_q = bitstr[::-1]
    return [i for i, b in enumerate(bitstr_q) if b == "1"]
"""
