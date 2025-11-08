OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[5];
h q[3];
cx q[5], q[4];
cx q[4], q[2];
s q[5];
s q[4];
