OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[1];
t q[2];
t q[0];
t q[0];
cx q[2], q[0];
h q[1];
