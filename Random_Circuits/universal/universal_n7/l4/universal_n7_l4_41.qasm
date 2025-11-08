OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[3];
cx q[0], q[1];
s q[5];
t q[4];
