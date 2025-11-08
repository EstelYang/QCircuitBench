OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[3];
cx q[6], q[4];
s q[2];
t q[8];
t q[7];
