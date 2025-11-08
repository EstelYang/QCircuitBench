OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[0];
cx q[2], q[4];
s q[6];
s q[8];
s q[10];
cx q[0], q[2];
