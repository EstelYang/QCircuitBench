OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[4];
s q[0];
s q[2];
s q[8];
cx q[8], q[7];
