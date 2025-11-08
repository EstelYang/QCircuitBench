OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[0];
h q[0];
s q[0];
h q[3];
t q[3];
