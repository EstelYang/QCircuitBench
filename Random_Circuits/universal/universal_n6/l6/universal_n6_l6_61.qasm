OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[4];
cx q[4], q[0];
t q[3];
cx q[1], q[3];
cx q[0], q[3];
s q[3];
