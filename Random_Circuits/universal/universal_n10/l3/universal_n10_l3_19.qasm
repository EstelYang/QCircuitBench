OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[0];
t q[0];
cx q[6], q[5];
