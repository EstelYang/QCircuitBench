OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[0];
h q[3];
s q[2];
h q[0];
h q[3];
cx q[4], q[2];
