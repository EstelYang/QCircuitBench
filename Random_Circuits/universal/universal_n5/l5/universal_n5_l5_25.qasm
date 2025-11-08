OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[2];
h q[0];
t q[3];
cx q[4], q[0];
t q[3];
