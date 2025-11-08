OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[6];
cx q[10], q[5];
s q[1];
h q[4];
h q[0];
t q[3];
