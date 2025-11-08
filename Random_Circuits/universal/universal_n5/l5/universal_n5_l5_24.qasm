OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[1];
cx q[1], q[4];
cx q[4], q[0];
cx q[2], q[3];
s q[0];
