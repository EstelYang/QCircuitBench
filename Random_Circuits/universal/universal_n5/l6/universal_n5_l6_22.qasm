OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[1], q[0];
t q[1];
s q[0];
t q[0];
cx q[2], q[1];
s q[1];
