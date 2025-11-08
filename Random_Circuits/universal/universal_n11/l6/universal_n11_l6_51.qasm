OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[1];
s q[1];
h q[9];
t q[10];
h q[6];
cx q[2], q[4];
