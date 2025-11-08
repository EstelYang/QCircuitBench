OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[1];
h q[3];
cx q[0], q[4];
h q[3];
h q[1];
s q[3];
