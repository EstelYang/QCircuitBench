OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[5];
cx q[3], q[6];
s q[2];
t q[1];
