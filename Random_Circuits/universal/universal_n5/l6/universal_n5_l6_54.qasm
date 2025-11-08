OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[2];
h q[4];
cx q[2], q[3];
h q[1];
s q[4];
cx q[0], q[2];
