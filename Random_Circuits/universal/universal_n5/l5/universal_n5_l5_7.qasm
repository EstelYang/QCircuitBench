OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[2];
t q[1];
cx q[0], q[4];
t q[2];
h q[1];
