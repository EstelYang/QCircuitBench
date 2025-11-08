OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[2];
s q[0];
cx q[2], q[4];
cx q[3], q[2];
t q[2];
