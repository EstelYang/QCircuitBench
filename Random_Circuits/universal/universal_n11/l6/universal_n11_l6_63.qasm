OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[8], q[9];
cx q[6], q[4];
cx q[2], q[6];
s q[9];
t q[10];
cx q[7], q[8];
