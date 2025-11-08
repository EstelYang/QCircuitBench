OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[8];
s q[7];
t q[5];
h q[8];
cx q[1], q[4];
