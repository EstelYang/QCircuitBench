OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[0];
h q[2];
cx q[0], q[2];
cx q[3], q[0];
t q[3];
