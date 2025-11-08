OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[10];
t q[1];
t q[10];
cx q[8], q[7];
h q[5];
t q[10];
