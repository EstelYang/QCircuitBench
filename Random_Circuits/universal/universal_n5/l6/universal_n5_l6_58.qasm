OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
t q[2];
h q[1];
cx q[4], q[2];
s q[0];
t q[3];
