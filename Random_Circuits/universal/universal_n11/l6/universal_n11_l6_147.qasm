OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[2];
cx q[10], q[4];
t q[6];
h q[9];
h q[2];
cx q[8], q[3];
