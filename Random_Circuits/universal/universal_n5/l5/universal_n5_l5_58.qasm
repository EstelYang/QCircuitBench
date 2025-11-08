OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[1];
h q[1];
h q[2];
cx q[2], q[0];
t q[2];
