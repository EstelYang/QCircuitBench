OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[3];
t q[6];
s q[3];
cx q[3], q[5];
