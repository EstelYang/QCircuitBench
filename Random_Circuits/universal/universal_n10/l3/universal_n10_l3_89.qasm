OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[4];
s q[7];
cx q[3], q[0];
