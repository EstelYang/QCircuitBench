OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[4];
cx q[2], q[0];
t q[2];
h q[3];
cx q[3], q[2];
t q[0];
