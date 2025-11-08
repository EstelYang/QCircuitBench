OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[1];
h q[1];
t q[1];
cx q[3], q[0];
s q[3];
