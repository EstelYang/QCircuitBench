OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[0];
t q[2];
h q[0];
h q[0];
cx q[0], q[2];
