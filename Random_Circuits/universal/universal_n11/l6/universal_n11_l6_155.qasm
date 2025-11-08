OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[8];
s q[0];
cx q[4], q[6];
t q[6];
cx q[0], q[6];
cx q[0], q[10];
