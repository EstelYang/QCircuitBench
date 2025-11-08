OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[1], q[0];
h q[1];
t q[8];
