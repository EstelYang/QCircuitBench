OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[2], q[0];
cx q[0], q[1];
t q[2];
h q[0];
h q[0];
