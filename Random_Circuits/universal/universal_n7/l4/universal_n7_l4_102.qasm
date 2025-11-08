OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[5], q[4];
s q[1];
s q[6];
s q[4];
