OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[5];
cx q[4], q[1];
s q[4];
s q[5];
s q[3];
s q[5];
