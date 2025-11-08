OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[3];
t q[0];
h q[0];
