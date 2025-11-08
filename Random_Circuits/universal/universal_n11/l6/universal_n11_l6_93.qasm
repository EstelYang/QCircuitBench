OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[10];
cx q[5], q[8];
h q[8];
t q[6];
h q[1];
cx q[2], q[5];
