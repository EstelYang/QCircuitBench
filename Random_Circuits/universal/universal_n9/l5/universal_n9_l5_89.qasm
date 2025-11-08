OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[7];
t q[1];
t q[1];
cx q[5], q[3];
cx q[6], q[8];
