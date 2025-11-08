OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[1], q[3];
t q[2];
t q[3];
h q[3];
h q[3];
