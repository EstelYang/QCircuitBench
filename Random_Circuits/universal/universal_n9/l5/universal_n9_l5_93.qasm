OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[1];
cx q[1], q[7];
h q[3];
h q[7];
h q[5];
