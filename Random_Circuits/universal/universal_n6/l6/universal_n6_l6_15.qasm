OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[5];
t q[5];
t q[2];
cx q[0], q[1];
t q[1];
cx q[0], q[2];
