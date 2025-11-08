OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[2];
t q[0];
t q[3];
cx q[4], q[2];
s q[3];
t q[2];
