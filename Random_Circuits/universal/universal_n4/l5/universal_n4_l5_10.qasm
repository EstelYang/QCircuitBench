OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[3];
h q[1];
h q[0];
h q[0];
s q[3];
