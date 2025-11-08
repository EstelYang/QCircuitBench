OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[0];
h q[1];
cx q[2], q[1];
s q[4];
t q[4];
