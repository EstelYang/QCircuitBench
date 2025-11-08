OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
s q[2];
h q[0];
s q[2];
t q[1];
s q[0];
