OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[3], q[0];
cx q[2], q[4];
t q[3];
cx q[1], q[5];
s q[3];
cx q[3], q[0];
