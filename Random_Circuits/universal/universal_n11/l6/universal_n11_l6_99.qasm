OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[8];
cx q[7], q[2];
cx q[1], q[7];
s q[2];
s q[5];
t q[0];
