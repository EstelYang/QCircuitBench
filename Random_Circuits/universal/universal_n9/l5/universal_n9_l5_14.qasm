OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[8];
h q[1];
cx q[5], q[7];
h q[5];
h q[3];
