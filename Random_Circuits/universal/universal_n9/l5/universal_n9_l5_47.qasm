OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[0];
s q[3];
cx q[8], q[3];
s q[1];
s q[5];
