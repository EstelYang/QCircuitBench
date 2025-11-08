OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[0];
t q[3];
t q[7];
cx q[8], q[4];
h q[1];
