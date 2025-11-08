OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[1];
cx q[4], q[5];
cx q[0], q[1];
cx q[5], q[3];
