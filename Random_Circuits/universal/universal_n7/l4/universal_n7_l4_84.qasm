OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[4];
cx q[2], q[0];
cx q[0], q[5];
s q[5];
