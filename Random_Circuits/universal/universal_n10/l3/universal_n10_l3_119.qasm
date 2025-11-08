OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[0];
cx q[9], q[3];
s q[4];
