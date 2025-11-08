OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[2];
cx q[1], q[8];
h q[5];
s q[8];
s q[2];
