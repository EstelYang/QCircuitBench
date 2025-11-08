OPENQASM 3.0;
include "stdgates.inc";
qubit[2] q;
cx q[1], q[0];
t q[0];
h q[0];
t q[0];
