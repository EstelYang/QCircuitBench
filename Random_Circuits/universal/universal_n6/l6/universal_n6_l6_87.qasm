OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[5];
t q[4];
cx q[5], q[0];
s q[0];
s q[4];
h q[5];
