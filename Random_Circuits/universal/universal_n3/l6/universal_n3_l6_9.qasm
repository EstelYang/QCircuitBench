OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[2], q[0];
h q[1];
cx q[0], q[2];
cx q[0], q[1];
s q[0];
cx q[0], q[2];
