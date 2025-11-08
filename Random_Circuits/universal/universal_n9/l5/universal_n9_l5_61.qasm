OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[6];
s q[5];
h q[4];
cx q[8], q[2];
s q[2];
