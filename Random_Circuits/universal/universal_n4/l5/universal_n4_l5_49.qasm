OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[1];
t q[0];
h q[3];
h q[0];
cx q[2], q[3];
