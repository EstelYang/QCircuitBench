OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[0];
cx q[2], q[3];
s q[3];
cx q[1], q[0];
cx q[2], q[1];
cx q[2], q[1];
