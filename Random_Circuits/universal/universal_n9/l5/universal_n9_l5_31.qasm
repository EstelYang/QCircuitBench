OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[8];
h q[7];
s q[3];
s q[7];
cx q[8], q[5];
