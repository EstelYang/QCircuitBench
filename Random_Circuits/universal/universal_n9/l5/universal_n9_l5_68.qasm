OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[3];
cx q[2], q[3];
h q[1];
t q[2];
s q[7];
