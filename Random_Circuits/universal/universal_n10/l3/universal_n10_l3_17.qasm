OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[1], q[4];
h q[4];
t q[4];
