OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[4];
t q[3];
s q[4];
t q[1];
cx q[1], q[8];
