OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[4], q[3];
h q[0];
t q[3];
h q[4];
cx q[1], q[0];
cx q[1], q[0];
