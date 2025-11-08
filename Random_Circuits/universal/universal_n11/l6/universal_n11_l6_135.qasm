OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[10];
cx q[8], q[7];
s q[0];
s q[7];
cx q[7], q[9];
s q[0];
