OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[5];
cx q[8], q[5];
s q[3];
t q[6];
t q[3];
