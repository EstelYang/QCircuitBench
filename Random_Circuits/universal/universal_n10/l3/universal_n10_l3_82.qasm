OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[2], q[7];
h q[8];
s q[5];
