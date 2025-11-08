OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[7];
t q[5];
t q[0];
s q[10];
cx q[4], q[2];
h q[1];
