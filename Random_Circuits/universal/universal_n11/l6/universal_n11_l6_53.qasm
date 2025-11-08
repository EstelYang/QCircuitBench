OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[1];
cx q[5], q[3];
h q[0];
s q[0];
t q[5];
cx q[9], q[5];
