OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[5], q[8];
t q[0];
t q[1];
h q[8];
t q[7];
