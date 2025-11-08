OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[8];
s q[1];
t q[7];
s q[6];
cx q[10], q[4];
s q[8];
