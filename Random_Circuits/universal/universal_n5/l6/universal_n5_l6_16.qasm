OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[2];
t q[1];
cx q[1], q[4];
cx q[2], q[0];
cx q[4], q[3];
cx q[1], q[0];
