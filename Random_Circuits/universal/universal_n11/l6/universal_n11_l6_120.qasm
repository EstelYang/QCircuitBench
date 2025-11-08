OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[10];
h q[5];
h q[9];
cx q[0], q[3];
t q[3];
cx q[9], q[5];
