OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[1], q[6];
cx q[6], q[7];
