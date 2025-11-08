OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[5];
t q[1];
h q[0];
t q[6];
