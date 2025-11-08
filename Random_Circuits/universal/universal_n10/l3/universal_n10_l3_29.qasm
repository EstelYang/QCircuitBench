OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[0], q[2];
t q[0];
h q[7];
