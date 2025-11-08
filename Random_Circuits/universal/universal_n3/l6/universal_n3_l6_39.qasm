OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[1];
h q[0];
t q[2];
cx q[0], q[2];
cx q[2], q[0];
t q[0];
