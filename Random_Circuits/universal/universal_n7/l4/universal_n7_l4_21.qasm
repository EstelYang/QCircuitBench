OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[4];
s q[2];
cx q[2], q[4];
h q[1];
