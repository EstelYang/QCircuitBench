OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[3];
cx q[5], q[8];
cx q[7], q[8];
s q[0];
t q[3];
