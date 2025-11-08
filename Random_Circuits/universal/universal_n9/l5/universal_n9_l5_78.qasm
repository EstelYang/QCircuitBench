OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[1], q[7];
s q[2];
h q[2];
t q[7];
t q[8];
