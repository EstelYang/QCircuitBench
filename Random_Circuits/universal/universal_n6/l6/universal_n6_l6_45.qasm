OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[4];
h q[4];
s q[3];
t q[1];
t q[1];
cx q[4], q[5];
