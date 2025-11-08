OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[3];
cx q[5], q[2];
h q[1];
t q[2];
t q[2];
h q[0];
