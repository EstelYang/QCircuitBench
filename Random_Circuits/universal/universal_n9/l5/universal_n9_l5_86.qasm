OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[0];
cx q[2], q[4];
cx q[8], q[6];
t q[1];
t q[5];
