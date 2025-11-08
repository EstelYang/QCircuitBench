OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[0];
s q[3];
cx q[1], q[0];
s q[2];
t q[2];
