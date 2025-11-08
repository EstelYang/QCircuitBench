OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[5];
t q[6];
cx q[3], q[1];
s q[5];
