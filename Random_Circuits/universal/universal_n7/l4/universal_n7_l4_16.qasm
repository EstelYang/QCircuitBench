OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[2];
t q[0];
s q[3];
cx q[4], q[1];
