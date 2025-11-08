OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[0];
t q[2];
h q[3];
cx q[0], q[2];
h q[2];
