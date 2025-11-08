OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[4];
h q[1];
h q[4];
t q[3];
cx q[1], q[0];
