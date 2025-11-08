OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[0];
h q[0];
cx q[2], q[0];
t q[1];
