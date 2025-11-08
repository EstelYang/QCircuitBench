OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[3];
cx q[3], q[6];
t q[5];
t q[2];
t q[4];
