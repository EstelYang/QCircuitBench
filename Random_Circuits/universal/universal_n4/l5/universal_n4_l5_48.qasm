OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[2];
h q[3];
s q[3];
cx q[3], q[0];
t q[3];
