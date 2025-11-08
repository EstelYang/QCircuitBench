OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[6];
h q[8];
cx q[1], q[5];
s q[7];
h q[4];
