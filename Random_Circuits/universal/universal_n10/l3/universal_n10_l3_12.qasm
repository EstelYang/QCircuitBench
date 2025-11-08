OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[1];
s q[2];
cx q[5], q[7];
