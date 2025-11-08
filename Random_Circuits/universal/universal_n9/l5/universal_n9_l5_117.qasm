OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[8];
t q[3];
h q[3];
t q[0];
t q[4];
