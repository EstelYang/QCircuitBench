OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[10];
h q[7];
t q[3];
cx q[10], q[8];
h q[1];
cx q[10], q[6];
