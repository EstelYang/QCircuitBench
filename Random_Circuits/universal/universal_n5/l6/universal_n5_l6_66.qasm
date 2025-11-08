OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[0];
t q[3];
s q[1];
h q[0];
cx q[3], q[1];
h q[4];
