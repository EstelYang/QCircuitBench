OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[1], q[10];
s q[2];
h q[10];
s q[3];
s q[7];
s q[5];
