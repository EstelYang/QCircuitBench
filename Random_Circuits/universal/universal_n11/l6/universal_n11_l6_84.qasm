OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[1];
s q[7];
s q[3];
s q[1];
cx q[5], q[8];
cx q[1], q[7];
