OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[4];
h q[0];
s q[8];
t q[2];
cx q[3], q[4];
h q[0];
