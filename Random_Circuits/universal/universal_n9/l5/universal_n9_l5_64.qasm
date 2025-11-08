OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[1], q[0];
s q[4];
h q[4];
h q[4];
t q[4];
