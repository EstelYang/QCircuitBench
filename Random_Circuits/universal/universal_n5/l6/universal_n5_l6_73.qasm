OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[4];
cx q[4], q[0];
h q[3];
s q[3];
h q[1];
t q[0];
