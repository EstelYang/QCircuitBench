OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[0];
t q[2];
h q[0];
cx q[0], q[2];
