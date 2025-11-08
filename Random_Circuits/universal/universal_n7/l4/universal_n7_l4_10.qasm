OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[6];
cx q[6], q[5];
h q[2];
s q[3];
