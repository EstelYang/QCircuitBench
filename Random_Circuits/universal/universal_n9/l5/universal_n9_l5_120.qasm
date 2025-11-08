OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[5];
cx q[8], q[6];
h q[7];
s q[4];
t q[8];
