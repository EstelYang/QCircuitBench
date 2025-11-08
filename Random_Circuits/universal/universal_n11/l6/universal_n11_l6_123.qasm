OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[8];
s q[1];
t q[0];
cx q[5], q[2];
h q[9];
h q[5];
