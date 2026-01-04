qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate H a { h a; }
gate S a { s a; }
gate T a { t a; }
gate CNOT a, b { cx a, b; }
qubit[4] q;
bit[4] c;
H q[0];
H q[2];
H q[3];
T q[0];
T q[2];
S q[3];
S q[3];
S q[3];
H q[2];
CNOT q[0], q[2];
H q[2];
"""
