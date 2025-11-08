OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[3];
s q[2];
cx q[1], q[3];
