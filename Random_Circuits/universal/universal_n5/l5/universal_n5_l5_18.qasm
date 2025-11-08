OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[3];
s q[1];
s q[3];
h q[1];
s q[4];
