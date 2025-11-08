OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[3];
s q[8];
t q[5];
t q[8];
cx q[4], q[0];
