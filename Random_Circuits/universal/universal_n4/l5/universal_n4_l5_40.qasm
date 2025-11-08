OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[1];
h q[3];
cx q[0], q[2];
h q[1];
cx q[2], q[3];
