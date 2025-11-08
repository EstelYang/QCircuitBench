OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[9];
h q[10];
cx q[7], q[1];
h q[0];
cx q[1], q[5];
cx q[10], q[9];
