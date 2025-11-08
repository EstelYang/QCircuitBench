OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[0];
cx q[3], q[0];
s q[2];
cx q[2], q[3];
h q[0];
