OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
cx q[4], q[3];
t q[4];
t q[2];
h q[4];
