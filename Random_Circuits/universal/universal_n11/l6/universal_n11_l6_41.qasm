OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[8];
cx q[0], q[3];
s q[8];
s q[10];
t q[6];
cx q[0], q[3];
