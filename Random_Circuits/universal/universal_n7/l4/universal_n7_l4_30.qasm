OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[2];
h q[3];
cx q[6], q[5];
s q[3];
