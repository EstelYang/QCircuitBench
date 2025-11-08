OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[2];
t q[7];
h q[2];
h q[0];
cx q[6], q[8];
