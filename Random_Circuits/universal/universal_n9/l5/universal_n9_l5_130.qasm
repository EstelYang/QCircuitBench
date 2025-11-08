OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[8], q[1];
s q[1];
s q[1];
h q[8];
s q[3];
