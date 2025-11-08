OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[6], q[9];
s q[4];
s q[6];
s q[3];
t q[6];
t q[4];
