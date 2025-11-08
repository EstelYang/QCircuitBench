OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[4], q[2];
cx q[4], q[6];
cx q[2], q[4];
s q[4];
