OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[3];
cx q[0], q[3];
t q[0];
h q[3];
cx q[2], q[1];
