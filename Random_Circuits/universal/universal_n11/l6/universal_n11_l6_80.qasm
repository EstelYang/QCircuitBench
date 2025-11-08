OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[9];
s q[0];
cx q[10], q[8];
h q[0];
s q[0];
s q[7];
