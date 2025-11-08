OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[6], q[10];
t q[8];
t q[6];
t q[6];
t q[2];
cx q[5], q[2];
