OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[2];
cx q[1], q[2];
s q[1];
h q[0];
h q[1];
