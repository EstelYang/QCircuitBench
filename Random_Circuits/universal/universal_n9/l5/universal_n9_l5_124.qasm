OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[0];
s q[0];
h q[8];
t q[5];
cx q[1], q[3];
