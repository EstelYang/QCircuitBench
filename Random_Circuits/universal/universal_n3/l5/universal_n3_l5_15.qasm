OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[0];
s q[0];
h q[0];
h q[2];
cx q[0], q[1];
