OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[6];
s q[8];
t q[4];
cx q[10], q[5];
h q[8];
t q[3];
