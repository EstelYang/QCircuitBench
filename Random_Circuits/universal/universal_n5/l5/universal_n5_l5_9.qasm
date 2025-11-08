OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[2];
cx q[0], q[1];
cx q[3], q[0];
cx q[2], q[1];
cx q[1], q[2];
