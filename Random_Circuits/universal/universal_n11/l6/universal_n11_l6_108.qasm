OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[7];
cx q[4], q[0];
t q[9];
cx q[8], q[3];
t q[10];
s q[7];
