OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[1];
h q[3];
cx q[2], q[3];
s q[0];
h q[2];
s q[1];
