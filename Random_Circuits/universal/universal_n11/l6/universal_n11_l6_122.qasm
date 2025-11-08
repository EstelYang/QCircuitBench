OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[4];
h q[0];
cx q[2], q[10];
h q[1];
cx q[3], q[2];
s q[5];
