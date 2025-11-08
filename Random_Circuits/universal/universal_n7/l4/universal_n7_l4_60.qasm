OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[4];
cx q[4], q[2];
s q[4];
t q[6];
