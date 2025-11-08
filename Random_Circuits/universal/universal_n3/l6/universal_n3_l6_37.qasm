OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[1], q[0];
s q[2];
cx q[1], q[2];
t q[1];
s q[1];
s q[2];
