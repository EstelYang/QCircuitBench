OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[1];
h q[1];
cx q[2], q[0];
h q[2];
cx q[1], q[0];
