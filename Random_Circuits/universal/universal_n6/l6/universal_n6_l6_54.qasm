OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[2];
cx q[3], q[0];
t q[2];
t q[1];
cx q[4], q[0];
s q[4];
