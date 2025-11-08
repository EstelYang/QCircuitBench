OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[2], q[0];
s q[2];
s q[3];
s q[4];
s q[9];
t q[6];
