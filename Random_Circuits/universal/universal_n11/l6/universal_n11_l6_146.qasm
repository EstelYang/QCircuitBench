OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[7], q[5];
h q[10];
h q[7];
t q[1];
t q[4];
cx q[0], q[3];
