OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[2];
cx q[2], q[3];
h q[3];
