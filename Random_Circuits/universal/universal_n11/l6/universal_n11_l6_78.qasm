OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[3];
t q[10];
cx q[0], q[2];
cx q[3], q[2];
s q[8];
t q[4];
