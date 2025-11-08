OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[0], q[3];
t q[2];
t q[1];
cx q[2], q[4];
t q[1];
