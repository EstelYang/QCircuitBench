OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
h q[2];
t q[4];
cx q[2], q[1];
h q[2];
