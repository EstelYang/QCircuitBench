OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[5];
cx q[1], q[2];
s q[3];
s q[0];
s q[0];
s q[2];
