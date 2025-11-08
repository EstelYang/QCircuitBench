OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[3], q[4];
h q[5];
s q[5];
t q[1];
h q[4];
