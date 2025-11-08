OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[2];
t q[3];
cx q[8], q[7];
s q[6];
s q[2];
h q[10];
