OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[3], q[0];
cx q[7], q[2];
