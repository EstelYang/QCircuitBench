OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[1];
cx q[2], q[4];
h q[5];
h q[2];
