OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[0];
s q[0];
h q[3];
s q[0];
cx q[1], q[4];
