OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[3];
s q[1];
cx q[9], q[8];
