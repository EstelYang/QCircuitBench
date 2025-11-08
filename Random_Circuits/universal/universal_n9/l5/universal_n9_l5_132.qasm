OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[0];
cx q[4], q[8];
s q[6];
s q[3];
s q[8];
