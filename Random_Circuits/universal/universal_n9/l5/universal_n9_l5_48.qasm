OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[3];
cx q[8], q[4];
s q[1];
t q[2];
h q[4];
