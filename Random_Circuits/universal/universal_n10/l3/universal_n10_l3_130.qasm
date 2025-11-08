OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[0], q[5];
cx q[2], q[5];
cx q[1], q[4];
