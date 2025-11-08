OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[3], q[2];
s q[9];
h q[1];
