OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[7], q[4];
s q[10];
s q[1];
t q[4];
h q[4];
h q[9];
