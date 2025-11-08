OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[2];
h q[1];
cx q[3], q[0];
h q[0];
s q[2];
