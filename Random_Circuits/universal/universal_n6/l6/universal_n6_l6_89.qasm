OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[1], q[0];
h q[3];
t q[5];
h q[2];
s q[2];
h q[2];
