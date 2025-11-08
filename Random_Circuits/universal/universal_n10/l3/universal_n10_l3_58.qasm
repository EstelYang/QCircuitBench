OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[9];
h q[0];
cx q[5], q[7];
