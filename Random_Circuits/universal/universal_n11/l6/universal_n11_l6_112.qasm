OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[2];
cx q[8], q[5];
t q[3];
cx q[5], q[3];
h q[10];
s q[6];
