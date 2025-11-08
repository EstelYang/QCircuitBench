OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[2];
cx q[1], q[4];
s q[5];
t q[3];
t q[4];
