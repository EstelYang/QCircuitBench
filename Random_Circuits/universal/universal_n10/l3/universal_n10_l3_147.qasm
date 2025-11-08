OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[1];
s q[8];
cx q[8], q[0];
