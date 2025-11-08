OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[1];
s q[2];
s q[0];
cx q[2], q[1];
s q[2];
