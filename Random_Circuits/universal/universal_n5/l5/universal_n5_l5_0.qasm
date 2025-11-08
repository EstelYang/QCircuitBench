OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[1];
t q[2];
s q[1];
t q[4];
cx q[0], q[3];
