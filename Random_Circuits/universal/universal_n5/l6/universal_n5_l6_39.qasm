OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[2];
t q[0];
h q[0];
h q[4];
s q[1];
t q[4];
