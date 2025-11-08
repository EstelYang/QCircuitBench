OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[4];
cx q[9], q[4];
h q[1];
s q[4];
h q[10];
h q[3];
