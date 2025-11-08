OPENQASM 3.0;
include "stdgates.inc";
qubit[2] q;
t q[1];
cx q[1], q[0];
t q[1];
h q[0];
