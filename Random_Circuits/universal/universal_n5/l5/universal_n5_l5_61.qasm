OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[0];
t q[0];
s q[3];
s q[1];
cx q[3], q[2];
