OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[1];
t q[5];
h q[1];
h q[3];
cx q[4], q[3];
h q[4];
