OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[6], q[7];
h q[1];
t q[4];
