OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[0], q[2];
cx q[0], q[2];
cx q[0], q[2];
h q[0];
t q[1];
t q[2];
