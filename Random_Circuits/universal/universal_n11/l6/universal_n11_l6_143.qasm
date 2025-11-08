OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[4];
cx q[6], q[8];
t q[0];
h q[6];
s q[8];
h q[2];
