OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[10];
h q[8];
cx q[3], q[2];
cx q[9], q[8];
t q[2];
h q[5];
