OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[4];
cx q[1], q[0];
t q[3];
s q[2];
