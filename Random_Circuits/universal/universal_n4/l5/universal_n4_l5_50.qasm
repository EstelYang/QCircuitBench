OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[2];
s q[3];
cx q[1], q[3];
t q[2];
s q[3];
