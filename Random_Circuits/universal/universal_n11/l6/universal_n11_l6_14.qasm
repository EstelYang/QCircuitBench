OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[1], q[5];
cx q[8], q[10];
s q[1];
t q[3];
h q[4];
h q[10];
