OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[2], q[4];
cx q[3], q[2];
t q[0];
t q[0];
h q[0];
cx q[0], q[1];
