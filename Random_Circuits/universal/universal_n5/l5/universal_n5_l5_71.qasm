OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[4];
h q[1];
cx q[2], q[3];
h q[3];
s q[2];
