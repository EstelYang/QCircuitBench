OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[4];
cx q[2], q[1];
cx q[1], q[4];
cx q[1], q[3];
t q[3];
s q[1];
