OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[4];
s q[3];
cx q[3], q[4];
cx q[1], q[0];
cx q[1], q[3];
t q[0];
