OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[2];
s q[8];
s q[2];
t q[4];
cx q[6], q[5];
