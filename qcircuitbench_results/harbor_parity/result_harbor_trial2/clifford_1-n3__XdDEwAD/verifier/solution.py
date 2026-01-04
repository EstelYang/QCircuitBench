qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

qubit[3] q;
bit[3] c;

h q[0];
h q[1];
h q[2];

s q[0];
s q[0];
s q[0];

h q[0];
cx q[2], q[0];
h q[0];
"""
