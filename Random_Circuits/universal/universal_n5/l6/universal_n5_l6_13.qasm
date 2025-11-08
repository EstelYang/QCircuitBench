OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[1];
h q[0];
cx q[4], q[3];
t q[4];
s q[4];
h q[1];
