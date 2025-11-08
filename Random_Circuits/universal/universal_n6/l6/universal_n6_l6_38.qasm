OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[1];
t q[1];
cx q[1], q[3];
t q[2];
s q[1];
s q[3];
