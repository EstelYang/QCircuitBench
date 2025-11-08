OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[6];
cx q[0], q[4];
s q[2];
