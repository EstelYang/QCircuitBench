OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[1], q[4];
s q[5];
t q[2];
s q[1];
cx q[3], q[0];
s q[0];
