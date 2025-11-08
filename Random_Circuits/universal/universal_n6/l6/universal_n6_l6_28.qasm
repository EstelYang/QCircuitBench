OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[1], q[2];
h q[0];
t q[1];
t q[0];
cx q[1], q[2];
t q[0];
