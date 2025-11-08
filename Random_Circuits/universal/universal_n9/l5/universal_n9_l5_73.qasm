OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[8], q[6];
h q[8];
h q[4];
t q[0];
t q[1];
