OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[1];
cx q[1], q[2];
h q[10];
h q[3];
cx q[0], q[2];
cx q[0], q[5];
