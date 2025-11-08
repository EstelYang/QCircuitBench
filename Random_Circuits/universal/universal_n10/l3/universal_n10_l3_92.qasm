OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[7], q[2];
cx q[2], q[4];
cx q[2], q[3];
