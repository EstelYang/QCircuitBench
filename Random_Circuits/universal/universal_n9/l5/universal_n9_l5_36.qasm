OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[5], q[8];
h q[1];
s q[5];
h q[8];
s q[3];
