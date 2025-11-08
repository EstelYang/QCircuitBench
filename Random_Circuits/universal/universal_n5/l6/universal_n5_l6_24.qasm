OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[4];
t q[0];
s q[4];
h q[0];
t q[1];
cx q[4], q[0];
