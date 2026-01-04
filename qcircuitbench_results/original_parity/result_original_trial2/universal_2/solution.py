qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
bit[4] c;
h q[0];
h q[2];
h q[3];
t q[0];
t q[2];
s q[3];
s q[3];
s q[3];
h q[2];
cx q[0], q[2];
h q[2];
"""
