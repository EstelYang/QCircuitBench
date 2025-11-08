OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[2];
cx q[8], q[10];
s q[1];
cx q[8], q[1];
t q[1];
cx q[4], q[0];
