OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[3];
s q[0];
t q[4];
t q[1];
cx q[4], q[2];
