OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[1], q[0];
cx q[6], q[5];
cx q[6], q[8];
cx q[2], q[5];
cx q[4], q[1];
