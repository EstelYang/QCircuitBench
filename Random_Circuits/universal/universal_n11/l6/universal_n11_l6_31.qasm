OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[7], q[1];
s q[10];
t q[5];
h q[2];
t q[7];
t q[9];
