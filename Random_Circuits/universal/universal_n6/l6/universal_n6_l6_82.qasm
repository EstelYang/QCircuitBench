OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[2];
s q[4];
cx q[0], q[4];
t q[0];
cx q[3], q[2];
h q[2];
