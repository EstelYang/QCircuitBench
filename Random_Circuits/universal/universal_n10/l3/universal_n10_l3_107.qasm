OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[7];
t q[6];
cx q[9], q[2];
