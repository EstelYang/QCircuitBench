OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[8];
h q[8];
h q[7];
s q[5];
cx q[3], q[1];
