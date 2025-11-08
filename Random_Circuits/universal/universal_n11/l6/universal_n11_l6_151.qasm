OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[7];
s q[0];
t q[8];
cx q[1], q[3];
t q[2];
cx q[3], q[10];
