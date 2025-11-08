OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[3];
s q[0];
t q[2];
cx q[0], q[1];
s q[0];
s q[0];
