OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[7];
s q[3];
h q[8];
s q[7];
cx q[0], q[7];
s q[1];
