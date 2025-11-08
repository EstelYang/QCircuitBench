OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[1];
s q[4];
cx q[9], q[4];
