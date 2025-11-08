OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[0];
h q[2];
t q[2];
cx q[4], q[1];
h q[4];
s q[0];
