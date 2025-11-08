OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[10], q[8];
h q[2];
h q[1];
t q[8];
t q[10];
cx q[5], q[4];
