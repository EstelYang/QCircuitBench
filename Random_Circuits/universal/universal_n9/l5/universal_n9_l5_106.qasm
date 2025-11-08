OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[1], q[0];
s q[2];
cx q[5], q[8];
cx q[6], q[7];
t q[1];
