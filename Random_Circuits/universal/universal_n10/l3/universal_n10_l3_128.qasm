OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[1], q[9];
s q[5];
h q[6];
