OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[4];
h q[4];
t q[3];
h q[2];
cx q[2], q[0];
s q[1];
