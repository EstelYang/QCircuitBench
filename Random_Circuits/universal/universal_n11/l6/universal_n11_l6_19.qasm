OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[0];
s q[7];
t q[6];
t q[3];
h q[10];
cx q[1], q[9];
