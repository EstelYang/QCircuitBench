OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[7];
h q[5];
s q[10];
cx q[5], q[2];
cx q[6], q[9];
h q[6];
