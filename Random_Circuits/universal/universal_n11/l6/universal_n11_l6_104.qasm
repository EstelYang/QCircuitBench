OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[3], q[5];
h q[6];
s q[10];
s q[3];
t q[8];
s q[8];
