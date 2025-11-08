OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[7];
s q[4];
t q[1];
s q[7];
t q[10];
cx q[0], q[4];
