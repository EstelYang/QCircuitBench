OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[1];
cx q[10], q[6];
h q[9];
t q[10];
t q[1];
h q[4];
