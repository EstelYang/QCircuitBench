OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[0];
s q[4];
cx q[4], q[1];
t q[0];
t q[1];
