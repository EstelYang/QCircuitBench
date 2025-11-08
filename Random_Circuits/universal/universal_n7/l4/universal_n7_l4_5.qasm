OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[0], q[5];
cx q[2], q[3];
t q[5];
cx q[2], q[3];
