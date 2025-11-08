OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[1];
h q[5];
cx q[5], q[6];
t q[7];
cx q[6], q[4];
cx q[1], q[7];
