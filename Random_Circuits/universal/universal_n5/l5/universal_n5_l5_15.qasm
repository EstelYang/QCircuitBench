OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[1], q[4];
t q[2];
cx q[3], q[2];
t q[0];
cx q[0], q[3];
