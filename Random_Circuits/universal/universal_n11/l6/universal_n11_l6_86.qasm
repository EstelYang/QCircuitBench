OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[2], q[10];
s q[10];
cx q[4], q[8];
h q[6];
cx q[2], q[0];
h q[1];
