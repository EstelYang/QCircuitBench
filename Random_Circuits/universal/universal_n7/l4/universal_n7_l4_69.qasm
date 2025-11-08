OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[4], q[5];
s q[5];
cx q[2], q[5];
s q[3];
