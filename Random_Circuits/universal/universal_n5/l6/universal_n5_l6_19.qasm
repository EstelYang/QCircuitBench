OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[4];
cx q[4], q[2];
s q[1];
s q[2];
t q[4];
cx q[4], q[2];
