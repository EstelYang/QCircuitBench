OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[5];
h q[6];
s q[10];
h q[5];
cx q[1], q[7];
cx q[5], q[10];
