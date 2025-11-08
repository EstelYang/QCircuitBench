OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[9];
h q[3];
h q[6];
h q[6];
cx q[1], q[8];
s q[3];
