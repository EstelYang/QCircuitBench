OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[3];
t q[5];
h q[7];
s q[0];
s q[4];
cx q[1], q[3];
