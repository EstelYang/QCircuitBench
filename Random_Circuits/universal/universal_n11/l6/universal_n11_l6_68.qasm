OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[0];
cx q[0], q[8];
cx q[2], q[1];
t q[6];
t q[10];
s q[2];
