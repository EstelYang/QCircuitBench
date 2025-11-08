OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[0];
t q[2];
cx q[3], q[7];
s q[3];
h q[8];
