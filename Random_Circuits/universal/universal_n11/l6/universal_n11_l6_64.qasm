OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[6];
cx q[8], q[5];
t q[1];
s q[6];
cx q[4], q[5];
h q[6];
