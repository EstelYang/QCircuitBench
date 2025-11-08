OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[1];
cx q[5], q[4];
s q[2];
s q[5];
