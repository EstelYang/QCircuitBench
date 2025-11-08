OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[7];
cx q[4], q[2];
h q[8];
s q[3];
t q[3];
