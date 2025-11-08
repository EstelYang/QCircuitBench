OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[7], q[5];
h q[6];
t q[6];
