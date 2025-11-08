OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[2], q[7];
h q[9];
h q[0];
t q[9];
cx q[4], q[0];
h q[10];
