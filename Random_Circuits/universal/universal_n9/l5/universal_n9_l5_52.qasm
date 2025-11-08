OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[3];
cx q[8], q[4];
t q[7];
h q[8];
t q[7];
