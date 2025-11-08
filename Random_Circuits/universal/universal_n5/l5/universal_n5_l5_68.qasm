OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[4];
cx q[4], q[0];
h q[3];
s q[4];
cx q[2], q[1];
