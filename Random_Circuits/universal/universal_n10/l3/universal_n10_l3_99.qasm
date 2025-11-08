OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[9], q[8];
t q[5];
h q[9];
