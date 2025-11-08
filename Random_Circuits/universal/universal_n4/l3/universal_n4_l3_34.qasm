OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[3];
h q[0];
cx q[0], q[3];
