OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[0];
h q[1];
t q[2];
cx q[4], q[0];
h q[2];
s q[4];
