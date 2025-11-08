OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[0];
s q[4];
cx q[2], q[4];
s q[2];
t q[1];
