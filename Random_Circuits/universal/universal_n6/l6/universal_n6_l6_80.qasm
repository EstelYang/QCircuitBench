OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[2];
s q[0];
cx q[5], q[0];
cx q[5], q[0];
t q[0];
t q[1];
