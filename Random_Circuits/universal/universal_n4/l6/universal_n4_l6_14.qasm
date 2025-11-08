OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[0], q[1];
t q[3];
h q[1];
s q[0];
t q[1];
s q[3];
