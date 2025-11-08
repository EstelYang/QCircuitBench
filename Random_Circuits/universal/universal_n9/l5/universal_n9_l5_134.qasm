OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[0], q[6];
h q[7];
s q[5];
t q[1];
t q[7];
