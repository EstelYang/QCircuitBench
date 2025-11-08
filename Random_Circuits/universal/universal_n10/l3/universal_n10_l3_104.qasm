OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[2], q[9];
s q[4];
s q[6];
