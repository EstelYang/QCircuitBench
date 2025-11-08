OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[2];
h q[3];
t q[0];
cx q[4], q[0];
t q[3];
h q[3];
