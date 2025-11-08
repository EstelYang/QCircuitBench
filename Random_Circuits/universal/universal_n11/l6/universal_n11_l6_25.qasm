OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[10];
s q[4];
cx q[3], q[7];
cx q[8], q[7];
cx q[6], q[0];
cx q[7], q[8];
