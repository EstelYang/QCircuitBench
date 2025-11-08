OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
cx q[1], q[4];
s q[4];
t q[3];
t q[1];
