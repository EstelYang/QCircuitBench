OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[1], q[6];
cx q[6], q[1];
cx q[7], q[2];
s q[6];
t q[7];
