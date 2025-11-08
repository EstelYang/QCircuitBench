OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[7];
t q[8];
h q[8];
s q[2];
cx q[3], q[1];
