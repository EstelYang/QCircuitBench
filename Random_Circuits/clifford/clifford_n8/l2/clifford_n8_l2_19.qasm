OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[4], q[6];
cx q[2], q[6];
