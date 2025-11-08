OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[2];
t q[9];
cx q[5], q[10];
t q[4];
h q[3];
h q[10];
