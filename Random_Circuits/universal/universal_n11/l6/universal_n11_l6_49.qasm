OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[9];
s q[6];
s q[5];
s q[4];
cx q[4], q[5];
cx q[4], q[0];
