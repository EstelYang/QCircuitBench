OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[1];
cx q[1], q[2];
t q[0];
t q[1];
cx q[1], q[0];
cx q[2], q[3];
