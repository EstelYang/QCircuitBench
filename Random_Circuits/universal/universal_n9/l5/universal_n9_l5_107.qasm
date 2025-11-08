OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[4];
h q[5];
cx q[7], q[8];
s q[7];
t q[5];
