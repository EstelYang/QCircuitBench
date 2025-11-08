OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[2];
cx q[0], q[1];
cx q[1], q[2];
cx q[0], q[2];
t q[1];
