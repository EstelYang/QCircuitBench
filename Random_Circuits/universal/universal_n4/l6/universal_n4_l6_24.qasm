OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[2];
t q[0];
cx q[3], q[1];
s q[3];
s q[1];
s q[1];
