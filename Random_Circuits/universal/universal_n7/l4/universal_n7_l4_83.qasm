OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[6], q[4];
cx q[6], q[2];
t q[0];
h q[2];
