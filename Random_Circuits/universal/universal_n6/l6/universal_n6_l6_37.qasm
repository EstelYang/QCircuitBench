OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[0], q[5];
t q[2];
cx q[5], q[0];
s q[0];
h q[2];
t q[5];
