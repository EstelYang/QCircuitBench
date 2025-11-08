OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[1];
h q[2];
s q[1];
h q[3];
s q[3];
t q[2];
