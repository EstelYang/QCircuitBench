OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[5];
s q[0];
h q[3];
cx q[0], q[4];
