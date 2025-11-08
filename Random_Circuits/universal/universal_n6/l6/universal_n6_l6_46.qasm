OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[3];
h q[3];
t q[2];
s q[1];
cx q[5], q[4];
s q[5];
