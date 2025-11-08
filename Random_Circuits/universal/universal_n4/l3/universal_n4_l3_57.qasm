OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[0];
cx q[1], q[0];
cx q[3], q[0];
