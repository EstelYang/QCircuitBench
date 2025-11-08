OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[2], q[4];
h q[1];
t q[6];
cx q[2], q[6];
