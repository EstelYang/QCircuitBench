OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[0];
h q[2];
cx q[1], q[2];
s q[1];
s q[1];
h q[0];
