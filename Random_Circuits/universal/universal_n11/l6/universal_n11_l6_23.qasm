OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[4];
t q[9];
cx q[3], q[9];
s q[0];
h q[2];
h q[2];
