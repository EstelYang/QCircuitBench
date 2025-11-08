OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[2];
s q[2];
t q[1];
cx q[1], q[0];
