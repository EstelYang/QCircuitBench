OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[0];
t q[3];
t q[0];
s q[2];
cx q[8], q[0];
cx q[5], q[2];
