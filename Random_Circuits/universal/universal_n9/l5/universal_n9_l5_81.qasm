OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[4];
s q[0];
h q[8];
cx q[3], q[0];
s q[7];
