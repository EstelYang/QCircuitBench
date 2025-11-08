OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[2];
t q[1];
s q[4];
cx q[2], q[6];
