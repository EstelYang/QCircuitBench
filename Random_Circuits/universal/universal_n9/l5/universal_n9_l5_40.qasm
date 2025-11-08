OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[0];
t q[6];
cx q[8], q[3];
cx q[3], q[2];
t q[7];
