OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[0], q[4];
cx q[2], q[0];
h q[0];
t q[2];
t q[2];
t q[3];
