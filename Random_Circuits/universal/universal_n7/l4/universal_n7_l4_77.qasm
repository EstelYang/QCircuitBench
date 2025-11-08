OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[6];
t q[1];
cx q[3], q[5];
s q[1];
