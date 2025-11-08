OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[0];
t q[4];
h q[0];
t q[8];
s q[3];
