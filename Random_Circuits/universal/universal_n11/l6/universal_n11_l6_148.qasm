OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[10];
cx q[1], q[5];
h q[3];
s q[0];
s q[6];
t q[7];
