OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[3];
s q[1];
cx q[0], q[4];
t q[5];
h q[0];
s q[2];
