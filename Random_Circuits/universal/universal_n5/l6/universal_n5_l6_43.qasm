OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[0];
s q[3];
t q[0];
t q[2];
t q[1];
cx q[0], q[1];
