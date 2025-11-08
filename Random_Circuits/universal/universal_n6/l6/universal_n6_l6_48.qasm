OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[1];
cx q[1], q[0];
cx q[3], q[4];
cx q[2], q[1];
cx q[3], q[4];
cx q[4], q[0];
