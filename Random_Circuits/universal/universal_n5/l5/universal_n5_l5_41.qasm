OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[2];
cx q[2], q[3];
s q[4];
t q[1];
cx q[1], q[3];
