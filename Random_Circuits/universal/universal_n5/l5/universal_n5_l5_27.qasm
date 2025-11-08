OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[1], q[2];
t q[1];
cx q[2], q[3];
h q[0];
t q[3];
