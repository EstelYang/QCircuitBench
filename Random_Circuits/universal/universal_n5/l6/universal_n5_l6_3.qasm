OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[3];
t q[1];
t q[0];
t q[4];
cx q[1], q[2];
cx q[0], q[3];
