OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[2], q[0];
h q[2];
cx q[2], q[1];
t q[1];
