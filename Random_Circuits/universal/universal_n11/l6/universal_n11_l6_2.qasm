OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[1];
h q[5];
t q[10];
cx q[4], q[6];
t q[8];
t q[1];
