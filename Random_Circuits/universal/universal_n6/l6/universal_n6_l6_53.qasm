OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[5];
s q[3];
s q[4];
t q[4];
cx q[0], q[1];
cx q[0], q[5];
