OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[4];
cx q[3], q[5];
t q[0];
s q[1];
s q[2];
cx q[3], q[2];
