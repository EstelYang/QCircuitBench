OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[8];
s q[4];
h q[10];
cx q[8], q[4];
h q[0];
cx q[3], q[8];
