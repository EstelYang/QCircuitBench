OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[1];
h q[2];
s q[3];
h q[2];
cx q[3], q[1];
h q[0];
