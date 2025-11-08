OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[1];
h q[1];
cx q[1], q[3];
h q[2];
t q[0];
