OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[2];
h q[1];
cx q[1], q[8];
h q[3];
s q[2];
