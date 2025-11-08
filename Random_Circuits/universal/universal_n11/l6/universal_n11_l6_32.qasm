OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[8], q[2];
s q[5];
s q[10];
cx q[6], q[4];
h q[1];
s q[8];
