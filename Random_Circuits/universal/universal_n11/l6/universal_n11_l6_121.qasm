OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[5], q[10];
t q[0];
cx q[0], q[1];
s q[6];
h q[10];
t q[1];
