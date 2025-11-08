OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
s q[1];
cx q[2], q[1];
h q[4];
cx q[4], q[2];
h q[4];
