OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[1];
cx q[7], q[3];
s q[5];
cx q[2], q[1];
t q[2];
