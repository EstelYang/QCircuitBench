OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[3];
cx q[7], q[4];
s q[8];
h q[0];
s q[4];
