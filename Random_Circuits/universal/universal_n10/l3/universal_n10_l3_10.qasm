OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[4];
h q[7];
cx q[8], q[4];
