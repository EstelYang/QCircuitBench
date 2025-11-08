OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[1];
cx q[0], q[3];
h q[1];
h q[1];
t q[0];
s q[2];
