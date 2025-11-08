OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[3], q[4];
t q[7];
s q[8];
t q[2];
cx q[2], q[3];
