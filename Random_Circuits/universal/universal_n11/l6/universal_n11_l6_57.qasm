OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[0];
s q[9];
cx q[2], q[10];
s q[5];
cx q[6], q[2];
t q[8];
