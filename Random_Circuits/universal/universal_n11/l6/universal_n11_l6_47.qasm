OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[0];
t q[4];
s q[6];
cx q[8], q[3];
h q[6];
s q[6];
