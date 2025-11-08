OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[1];
h q[3];
h q[3];
cx q[1], q[3];
t q[2];
cx q[3], q[0];
