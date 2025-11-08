OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[2], q[3];
cx q[3], q[6];
t q[2];
cx q[0], q[5];
