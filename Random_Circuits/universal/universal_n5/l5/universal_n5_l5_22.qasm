OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[3];
h q[2];
cx q[0], q[2];
t q[0];
h q[4];
