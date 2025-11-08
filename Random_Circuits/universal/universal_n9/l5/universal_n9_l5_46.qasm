OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[4];
s q[1];
s q[5];
s q[2];
cx q[2], q[0];
