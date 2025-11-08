OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[8];
cx q[4], q[6];
s q[3];
s q[6];
cx q[5], q[2];
