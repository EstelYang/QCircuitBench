OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[2];
s q[2];
s q[1];
cx q[0], q[1];
