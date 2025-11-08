OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[2];
cx q[1], q[2];
h q[9];
