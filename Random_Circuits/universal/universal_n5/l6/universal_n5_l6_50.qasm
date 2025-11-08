OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[0];
h q[3];
h q[0];
s q[3];
cx q[0], q[4];
t q[1];
