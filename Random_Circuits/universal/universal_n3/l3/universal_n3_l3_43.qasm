OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[0], q[1];
cx q[2], q[1];
cx q[0], q[1];
