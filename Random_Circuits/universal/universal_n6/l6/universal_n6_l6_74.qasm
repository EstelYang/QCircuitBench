OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[5];
cx q[2], q[4];
s q[0];
h q[4];
cx q[2], q[1];
s q[1];
