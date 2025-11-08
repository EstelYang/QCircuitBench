OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[4];
h q[7];
cx q[1], q[4];
t q[4];
s q[0];
