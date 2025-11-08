OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[5];
t q[3];
cx q[2], q[6];
cx q[3], q[5];
t q[5];
cx q[10], q[6];
