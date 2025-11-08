OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[1], q[0];
s q[0];
h q[1];
s q[0];
