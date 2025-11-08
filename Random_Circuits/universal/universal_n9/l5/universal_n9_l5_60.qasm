OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[5], q[2];
t q[8];
t q[0];
t q[5];
cx q[3], q[0];
