OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[4];
s q[0];
cx q[4], q[9];
s q[8];
h q[6];
cx q[2], q[4];
