OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[2];
s q[0];
cx q[0], q[3];
cx q[3], q[0];
h q[1];
t q[0];
