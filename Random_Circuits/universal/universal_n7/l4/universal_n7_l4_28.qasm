OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[0], q[6];
s q[3];
t q[2];
s q[3];
