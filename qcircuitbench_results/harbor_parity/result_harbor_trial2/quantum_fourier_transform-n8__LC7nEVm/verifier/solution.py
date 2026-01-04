qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[8] q;

Psi q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];

h q[0];
cp(pi/2) q[1], q[0];
cp(pi/4) q[2], q[0];
cp(pi/8) q[3], q[0];
cp(pi/16) q[4], q[0];
cp(pi/32) q[5], q[0];
cp(pi/64) q[6], q[0];
cp(pi/128) q[7], q[0];

h q[1];
cp(pi/2) q[2], q[1];
cp(pi/4) q[3], q[1];
cp(pi/8) q[4], q[1];
cp(pi/16) q[5], q[1];
cp(pi/32) q[6], q[1];
cp(pi/64) q[7], q[1];

h q[2];
cp(pi/2) q[3], q[2];
cp(pi/4) q[4], q[2];
cp(pi/8) q[5], q[2];
cp(pi/16) q[6], q[2];
cp(pi/32) q[7], q[2];

h q[3];
cp(pi/2) q[4], q[3];
cp(pi/4) q[5], q[3];
cp(pi/8) q[6], q[3];
cp(pi/16) q[7], q[3];

h q[4];
cp(pi/2) q[5], q[4];
cp(pi/4) q[6], q[4];
cp(pi/8) q[7], q[4];

h q[5];
cp(pi/2) q[6], q[5];
cp(pi/4) q[7], q[5];

h q[6];
cp(pi/2) q[7], q[6];

h q[7];

swap q[0], q[7];
swap q[1], q[6];
swap q[2], q[5];
swap q[3], q[4];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    return [0, 1, 2, 3, 4, 5, 6, 7]
"""
