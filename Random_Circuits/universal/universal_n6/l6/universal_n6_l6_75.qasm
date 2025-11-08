OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[3];
t q[4];
t q[3];
t q[0];
cx q[3], q[2];
s q[0];
