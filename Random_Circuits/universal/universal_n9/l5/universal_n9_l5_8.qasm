OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[8];
cx q[6], q[1];
t q[8];
cx q[8], q[6];
cx q[8], q[6];
