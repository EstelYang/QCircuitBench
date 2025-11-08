OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[5];
h q[1];
cx q[8], q[9];
