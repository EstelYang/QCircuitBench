OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[7];
cx q[2], q[3];
s q[8];
t q[6];
cx q[5], q[1];
