OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[0];
cx q[4], q[5];
t q[4];
h q[1];
s q[4];
s q[1];
