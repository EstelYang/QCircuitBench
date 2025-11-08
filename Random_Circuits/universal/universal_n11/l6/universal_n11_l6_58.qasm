OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[4], q[8];
h q[2];
cx q[6], q[3];
h q[10];
t q[7];
h q[6];
