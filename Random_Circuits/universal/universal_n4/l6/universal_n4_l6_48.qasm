OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[3];
s q[3];
t q[1];
s q[2];
t q[3];
s q[3];
