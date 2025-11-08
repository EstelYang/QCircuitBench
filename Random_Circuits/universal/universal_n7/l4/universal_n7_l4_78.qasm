OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[3];
cx q[4], q[2];
cx q[6], q[0];
t q[1];
