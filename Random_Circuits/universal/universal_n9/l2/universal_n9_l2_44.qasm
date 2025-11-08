OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[7], q[0];
cx q[0], q[6];
