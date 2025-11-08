OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[5];
cx q[3], q[6];
cx q[5], q[1];
s q[1];
t q[0];
