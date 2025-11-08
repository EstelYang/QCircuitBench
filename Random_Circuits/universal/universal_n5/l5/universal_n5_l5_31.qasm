OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[4];
cx q[1], q[4];
s q[1];
t q[0];
t q[2];
