OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[5];
h q[3];
cx q[2], q[1];
h q[4];
