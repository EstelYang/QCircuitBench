OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
cx q[2], q[1];
h q[2];
s q[2];
h q[2];
