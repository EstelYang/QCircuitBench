OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[4];
cx q[0], q[3];
h q[0];
cx q[1], q[3];
t q[10];
s q[2];
