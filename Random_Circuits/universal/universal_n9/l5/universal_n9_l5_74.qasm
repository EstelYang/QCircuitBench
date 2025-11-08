OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[3], q[4];
h q[8];
h q[7];
cx q[5], q[8];
t q[1];
