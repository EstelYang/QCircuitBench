OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[1];
t q[2];
cx q[2], q[3];
h q[3];
h q[1];
