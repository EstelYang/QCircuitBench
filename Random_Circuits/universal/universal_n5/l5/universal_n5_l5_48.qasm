OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[4];
cx q[0], q[4];
h q[3];
t q[3];
s q[4];
