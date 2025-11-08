OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[1];
t q[1];
h q[1];
s q[2];
h q[3];
cx q[0], q[3];
