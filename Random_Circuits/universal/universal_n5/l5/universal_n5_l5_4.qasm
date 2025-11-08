OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[3];
h q[3];
h q[4];
cx q[4], q[3];
s q[3];
