OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[1];
s q[4];
s q[2];
cx q[1], q[3];
