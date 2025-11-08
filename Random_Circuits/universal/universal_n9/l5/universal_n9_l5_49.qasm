OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[7];
cx q[8], q[6];
h q[1];
cx q[0], q[4];
cx q[3], q[6];
