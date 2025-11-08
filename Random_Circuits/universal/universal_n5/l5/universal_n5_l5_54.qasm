OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
cx q[3], q[4];
h q[3];
h q[4];
s q[2];
