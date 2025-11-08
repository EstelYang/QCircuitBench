OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[0], q[3];
t q[0];
t q[1];
t q[1];
t q[2];
t q[2];
