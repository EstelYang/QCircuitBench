OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[0];
t q[0];
cx q[1], q[3];
s q[2];
t q[1];
h q[1];
