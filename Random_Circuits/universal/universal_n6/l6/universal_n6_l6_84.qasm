OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[4];
s q[5];
t q[1];
s q[2];
cx q[3], q[0];
s q[2];
