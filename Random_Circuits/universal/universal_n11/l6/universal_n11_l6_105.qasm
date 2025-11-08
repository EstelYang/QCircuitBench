OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[3], q[10];
cx q[1], q[3];
s q[8];
s q[4];
t q[10];
t q[3];
