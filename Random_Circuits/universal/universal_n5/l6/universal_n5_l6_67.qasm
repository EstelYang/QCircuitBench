OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[1], q[2];
s q[0];
h q[1];
cx q[3], q[4];
h q[3];
h q[2];
