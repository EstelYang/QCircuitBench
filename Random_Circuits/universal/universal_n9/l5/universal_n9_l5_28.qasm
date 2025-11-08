OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[3];
s q[6];
h q[8];
cx q[0], q[7];
h q[2];
