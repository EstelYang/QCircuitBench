OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[1];
cx q[3], q[0];
cx q[3], q[0];
t q[0];
t q[2];
