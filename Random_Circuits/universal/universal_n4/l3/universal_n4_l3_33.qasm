OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[2];
cx q[1], q[3];
h q[2];
