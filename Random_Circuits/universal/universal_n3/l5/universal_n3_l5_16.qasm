OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
s q[0];
h q[1];
h q[0];
cx q[2], q[0];
h q[0];
