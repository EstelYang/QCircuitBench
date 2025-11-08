OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[5];
s q[3];
t q[4];
s q[3];
cx q[6], q[2];
