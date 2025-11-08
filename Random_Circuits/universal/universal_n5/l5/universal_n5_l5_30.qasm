OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[3];
s q[1];
cx q[4], q[0];
s q[4];
s q[1];
