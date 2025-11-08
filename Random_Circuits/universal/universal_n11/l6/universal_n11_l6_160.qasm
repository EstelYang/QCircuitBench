OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[5];
h q[2];
t q[8];
cx q[3], q[4];
t q[5];
s q[7];
