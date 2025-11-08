OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[2];
cx q[0], q[2];
s q[0];
t q[2];
h q[2];
