OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
t q[0];
cx q[3], q[1];
h q[1];
h q[2];
