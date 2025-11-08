OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[1];
s q[0];
h q[0];
s q[4];
cx q[0], q[2];
h q[1];
