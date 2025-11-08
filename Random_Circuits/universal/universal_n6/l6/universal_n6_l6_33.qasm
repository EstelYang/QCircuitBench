OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[4];
s q[1];
t q[4];
t q[2];
s q[3];
cx q[0], q[2];
