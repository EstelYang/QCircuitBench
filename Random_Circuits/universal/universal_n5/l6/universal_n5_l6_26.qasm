OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[0];
s q[4];
h q[2];
cx q[0], q[1];
h q[4];
cx q[2], q[3];
