OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[7];
t q[10];
t q[1];
h q[7];
cx q[6], q[4];
s q[4];
