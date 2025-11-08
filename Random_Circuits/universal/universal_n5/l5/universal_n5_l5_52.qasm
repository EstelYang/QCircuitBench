OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[1];
cx q[0], q[4];
s q[2];
cx q[0], q[1];
cx q[2], q[0];
