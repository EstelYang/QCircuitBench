OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[1], q[2];
t q[2];
h q[1];
s q[0];
