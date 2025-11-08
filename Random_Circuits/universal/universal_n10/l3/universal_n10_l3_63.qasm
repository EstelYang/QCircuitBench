OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[4];
h q[2];
cx q[3], q[5];
