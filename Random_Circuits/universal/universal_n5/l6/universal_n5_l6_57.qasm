OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[1];
cx q[0], q[3];
t q[1];
cx q[1], q[0];
s q[3];
t q[0];
