OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[2], q[6];
cx q[5], q[1];
cx q[3], q[4];
t q[3];
