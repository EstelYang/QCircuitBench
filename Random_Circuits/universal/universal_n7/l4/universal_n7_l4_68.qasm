OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[1];
cx q[2], q[3];
t q[2];
t q[1];
