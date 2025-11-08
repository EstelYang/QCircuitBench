OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
cx q[4], q[0];
s q[2];
cx q[0], q[4];
h q[1];
