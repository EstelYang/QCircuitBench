OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[2], q[6];
s q[6];
h q[1];
h q[3];
