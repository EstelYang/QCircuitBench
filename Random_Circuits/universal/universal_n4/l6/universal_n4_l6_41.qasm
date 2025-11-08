OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[2];
cx q[0], q[1];
t q[3];
s q[2];
h q[0];
h q[3];
