OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[3], q[0];
cx q[5], q[4];
h q[10];
h q[5];
s q[10];
cx q[4], q[1];
