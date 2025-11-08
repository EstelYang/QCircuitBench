OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[4];
t q[2];
t q[4];
h q[0];
h q[3];
