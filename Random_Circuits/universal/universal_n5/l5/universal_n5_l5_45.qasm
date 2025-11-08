OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[2];
s q[1];
h q[0];
t q[4];
s q[1];
