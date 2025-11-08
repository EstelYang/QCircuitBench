OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[1], q[10];
s q[3];
t q[4];
t q[1];
t q[10];
h q[10];
