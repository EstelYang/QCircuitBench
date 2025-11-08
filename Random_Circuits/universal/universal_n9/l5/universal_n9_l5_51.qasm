OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[0], q[4];
s q[2];
cx q[4], q[3];
t q[1];
s q[0];
