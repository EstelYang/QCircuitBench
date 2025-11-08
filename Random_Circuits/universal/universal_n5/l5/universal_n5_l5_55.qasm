OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[2];
cx q[1], q[3];
cx q[0], q[2];
cx q[4], q[1];
s q[2];
