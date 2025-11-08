OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[0];
cx q[4], q[0];
cx q[0], q[3];
cx q[3], q[0];
s q[3];
cx q[0], q[4];
