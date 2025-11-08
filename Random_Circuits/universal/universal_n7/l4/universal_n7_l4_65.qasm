OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[6];
s q[2];
t q[4];
cx q[5], q[6];
