OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[0];
cx q[1], q[3];
h q[4];
h q[1];
t q[1];
