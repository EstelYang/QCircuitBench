OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[1], q[7];
h q[3];
t q[6];
h q[5];
cx q[7], q[2];
