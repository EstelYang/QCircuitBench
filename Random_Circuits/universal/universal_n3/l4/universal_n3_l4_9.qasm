OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[2], q[0];
cx q[0], q[2];
t q[0];
t q[0];
