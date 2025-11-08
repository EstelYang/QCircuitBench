OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[0];
cx q[1], q[6];
cx q[1], q[10];
s q[1];
h q[10];
cx q[8], q[10];
