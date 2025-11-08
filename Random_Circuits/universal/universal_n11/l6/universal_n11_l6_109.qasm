OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[7];
h q[3];
t q[10];
cx q[3], q[6];
h q[5];
t q[9];
