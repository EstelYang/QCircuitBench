OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[6], q[1];
cx q[4], q[1];
t q[3];
cx q[2], q[4];
