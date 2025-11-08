OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[2];
s q[1];
cx q[0], q[4];
cx q[2], q[4];
cx q[1], q[3];
