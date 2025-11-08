OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[4];
t q[2];
s q[5];
cx q[5], q[4];
h q[5];
s q[4];
